#include "SnakeBody.h"
#include "Play.h"
#define PLAY_IMPLEMENTATION

void DrawSnakeParts(SnakeBody snakeBody) {//User Björn

	Play::DrawCircle(snakeBody.position, 10, snakeBody.GetColour());

}
