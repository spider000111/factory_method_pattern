#pragma once
#include "IObstacle.h"
#include "IObstacleCreator.h"
#include "CircleObstacle.h"
#include "SquareObstacle.h"


class ObstacleCreator :    public IObstacleCreator
{
	int ref_count;
public:
	ObstacleCreator() :ref_count(0) {}
	std::shared_ptr<IObstacle> get_obstacle() {
		std::shared_ptr<IObstacle> ret =nullptr;

		if (ref_count == 0) {
			ret = std::make_shared<SquareObstacle>();
			ref_count++;
		}
		else if (ref_count == 1) {
			ret = std::make_shared<CircleObstacle>();
			ref_count--;
		}
		return ret;
	}
};

