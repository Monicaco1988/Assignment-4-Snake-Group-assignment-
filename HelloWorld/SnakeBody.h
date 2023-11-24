#pragma once
#include "Play.h"
//When declaring an SnakeBody array declare a new SnakeBody in each position in the array
class SnakeBody // user Björn
{
private:
	Play::Colour colour = {float(Play::RandomRollRange(0, 256)),float(Play::RandomRollRange(0, 256)) ,float(Play::RandomRollRange(0, 256)) };
public:
	Point2D position;
	SnakeBody() {
		position = { 620 / 2, 340 / 2 };
		
	}
	~SnakeBody() {

	}
	Play::Colour GetColour() {
		return colour;
	}
	void SetColour(Play::Colour colour) {
		this->colour = colour;
	}
};
//Takes a snakeBody and a distans mutilplier from the first snake, this is easiest done in a loop to fix this
void DrawSnakeParts(SnakeBody snakeBody);

