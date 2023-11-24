#include "Apple.h"
// User Edmin 
int posX = 50; // User Edmin Initierar äpplet längst upp till höger
int posY = 50;

void Apple::Draw() 
{
	Play::DrawCircle(circlePosition, 10, Play::cRed);
};

Apple SpawnApple()
{

	Apple apple = Apple(posX, posY); // definiera apple som object från constr.
	apple.Draw();

	if (Play::KeyPressed(VK_SPACE))
	{
		Apple apple = Apple(); // definiera apple som object från constr.
		apple.Draw();
		posX = apple.x;
		posY = apple.y;
	}
	return apple;
};