#pragma once
#include "IObstacle.h"
#include <iostream>

class SquareObstacle :    public IObstacle
{
	std::string ret =  "square ob\n";
public:
	std::string read_obstacle() {
		return ret;
	
	}
};

