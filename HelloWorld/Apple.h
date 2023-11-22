#pragma once
#include <Play.h>

class Apple // User: Edmin
{
public:
	int x;
	int y;
	Point2D circlePosition = Point2D(x,y);

	void Draw(int x,int y)
	{
		Play::DrawCircle(circlePosition, 20,Play::cRed);
		
	};
};

int DISPLAY_WIDTH = 640;
int DISPLAY_HEIGHT = 360;
int DISPLAY_SCALE = 2;