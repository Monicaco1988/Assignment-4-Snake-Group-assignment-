#include "Apple.h"
// User Edmin 
int posX = 10; // User Edmin Initierar äpplet längst upp till höger
int posY = 10;

void Apple::Draw() 
{
	Play::DrawCircle(circlePosition, 10, Play::cRed);
};

void SpawnApple()
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
};