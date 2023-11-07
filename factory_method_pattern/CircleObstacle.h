#pragma once
#include "IObstacle.h"
#include <iostream>

class CircleObstacle :    public IObstacle
{
	std::string ret ="Circle ob\n";

public:
	std::string read_obstacle() {
		return ret;

	}

};

