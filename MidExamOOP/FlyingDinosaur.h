#pragma once
#include "Dinosaur.h"
class FlyingDinosaur :
    public Dinosaur
{
public:
    FlyingDinosaur(string, int, int);
    void fly(int time);
    void showDistanceCovered();
    
private:
    int flying_speed;

};

