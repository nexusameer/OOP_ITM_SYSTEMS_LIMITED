#pragma once
class GradedActivity
{
public:
    GradedActivity();
    GradedActivity(double);
    void setScore(double);
    double getScore() const;
    char getLetterGrade() const;
private:
    double score;
};

