#include "WaterDrop.hpp"

WaterDrop::WaterDrop(float _xPos, float _size)
{
    xPos = _xPos;
    size = _size;
    yPos = 0;
    speed = 9.8;
}

//-------------------------------------------------------
void WaterDrop::set_xPos(float _xPos)
{
    xPos = _xPos;
}

float WaterDrop::get_xPos()
{
    return xPos;
}

//-------------------------------------------------------
void WaterDrop::set_yPos(float _yPos)
{
    yPos = _yPos;
}
    
float WaterDrop::get_yPos()
{
    return yPos;
}

//-------------------------------------------------------
void WaterDrop::set_size(float _size)
{
    size = _size;
}

float WaterDrop::get_size()
{
    return size;
}

//-------------------------------------------------------
float WaterDrop::gravity()
{
    yPos = yPos + speed;
    return yPos;
}

//-------------------------------------------------------
void WaterDrop::display()
{
    ofSetColor(0,0,255);
    ofDrawCircle(get_xPos(), get_yPos(), get_size()); // change to custom shape
}

