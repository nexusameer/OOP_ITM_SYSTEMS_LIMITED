#include "GameApp.h"
#include "Game.h"
#include <typeinfo> // For typeid

using namespace std;

GameApp::GameApp() {
    srand(time(0)); // Initialize random seed
    games[0] = new MathChallenge();
    games[1] = new Anagrams();
    games[2] = new MissingNumber();
    games[3] = new NumberGuessing();
    games[4] = new RockPaperScissors();
    loadPlayers(); // Load player data from file
}

GameApp::~GameApp() {
    for (int i = 0; i < 5; ++i) {
        delete games[i]; // Clean up dynamically allocated games
    }
    savePlayers(); // Save player data to file
}

void GameApp::signUp() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (findPlayer(username) != nullptr) {
        cout << "Username already exists.\n";
    }
    else {
        players.emplace_back(username, password);
        cout << "Account created successfully.\n";
        savePlayers(); // Save after registration
    }
}

void GameApp::signIn() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    Player* player = findPlayer(username);
    if (player != nullptr && player->authenticate(password)) {
        currentPlayer = player;
        cout << "Welcome, " << username << "!\n";
    }
    else {
        cout << "Invalid credentials.\n";
    }
}

void GameApp::playGame() {
    if (!currentPlayer) {
        cout << "Please sign in first.\n";
        return;
    }

    Game* game = games[rand() % 5]; // Select a random game
    cout << "Playing " << typeid(*game).name() << endl;
    if (game->play()) {
        currentPlayer->addBadge(game->getTitle());
    }
    savePlayers(); // Save badges earned
}

void GameApp::viewBadges() {
    if (!currentPlayer) {
        cout << "Please sign in first.\n";
        return;
    }
    currentPlayer->viewBadges();
}

void GameApp::leaderboard() {
    cout << "Leaderboard:\n";
    for (const Player& player : players) {
        cout << player.getUsername() << ": " << player.getBadgeCount() << " badges\n";
    }
}

void GameApp::menu() {
    while (true) {
        if (currentPlayer) { // If the user is logged in
            cout << "\n1. Play Game\n2. View My Badges\n3. View Leaderboard\n4. Sign Out\n5. Exit\n";
            int choice;
            cin >> choice;

            switch (choice) {
            case 1: playGame(); break;
            case 2: viewBadges(); break;
            case 3: leaderboard(); break;
            case 4:
                currentPlayer = nullptr; // Sign out
                cout << "You have been signed out.\n";
                break;
            case 5: return;
            default: cout << "Invalid option.\n"; break;
            }
        }
        else { // If the user is not logged in
            cout << "\n1. Sign Up\n2. Sign In\n3. View Leaderboard\n4. Exit\n";
            int choice;
            cin >> choice;

            switch (choice) {
            case 1: signUp(); break;
            case 2: signIn(); break;
			case 3: leaderboard(); break;
            case 4: return;
            default: cout << "Invalid option.\n"; break;
            }
        }
    }
}


Player* GameApp::findPlayer(const string& username) {
    for (Player& player : players) {
        if (player.getUsername() == username) {
            return &player;
        }
    }
    return nullptr;
}

void GameApp::loadPlayers() {
    ifstream file(dataFile);
    if (!file.is_open()) {
        cout << "No existing player data found. A new file will be created upon saving.\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        Player player;
        player.loadFromData(line);
        players.push_back(player);
    }
    file.close();
}

void GameApp::savePlayers() {
    ofstream file(dataFile);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for saving player data.\n";
        return;
    }

    for (const Player& player : players) {
        file << player.toDataString() << endl;
    }
    file.close();
}
