#include "SnakeBody.h"
#include "Play.h"
#define PLAY_IMPLEMENTATION

void DrawSnakeParts(SnakeBody snakeBody, int multiplierDistans) {

	Point2D temp = snakeBody.position;
	temp += {20 * multiplierDistans, 0};
	Play::DrawCircle(temp, 10, snakeBody.GetColour());

}
