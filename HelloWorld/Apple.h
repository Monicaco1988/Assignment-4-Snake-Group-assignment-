#pragma once
#include <Play.h>

class Apple // User: Edmin
{
public:
	
	int x;
	int y;
	Point2D circlePosition;

	Apple(int x, int y) // constructor 
	{
		this->x = x;
		this->y = x;
		circlePosition = { x,y };
	};

	Apple()  // default constructor
	{
		this->x = rand() % (640 - 0 + 1) + 0;
		this->y = rand() % (320 - 0 + 1) + 0;
		circlePosition = { x,y };
	};
	
	void Draw();

};


