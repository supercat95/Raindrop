#include "ofApp.h"

#pragma once

class WaterDrop
{
private:
    float xPos, yPos = 0, size, speed = 9.8;
    
public:
    WaterDrop() = default;
    
    WaterDrop(float xPos, float size);
    
    void set_xPos(float xPos);
    float get_xPos();
    
    void set_yPos(float _yPos);
    float get_yPos();
    
    void set_size(float _size);
    float get_size();
    
    float gravity();
    
    void display();
    
};
