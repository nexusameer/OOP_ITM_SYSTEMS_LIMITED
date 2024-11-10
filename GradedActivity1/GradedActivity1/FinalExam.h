#pragma once
#include "GradedActivity.h"
class FinalExam :
    public GradedActivity
{
public:
    FinalExam();
    FinalExam(int, int);
    void set(int, int);  
    double getNumQuestions() const;
    double getPointsEach() const;
    int getNumMissed() const;
private:
    int numQuestions;
    double pointsEach;
    int numMissed;
};

