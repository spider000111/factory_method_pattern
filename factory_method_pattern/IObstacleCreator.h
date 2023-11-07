#pragma once
#include "IObjectCreator.h"
#include "IObstacle.h"
#include <iostream>

class IObstacleCreator :    public IObjectCreator
{
	//this class will create obstacle in the game
public:
	virtual std::shared_ptr<IObstacle> get_obstacle() = 0;


};

