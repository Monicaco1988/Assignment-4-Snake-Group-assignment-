#include "Apple.h"
// User Edmin 
int posX = 50; // User Edmin Initierar äpplet längst upp till höger
int posY = 50;

void Apple::Draw() 
{
	Play::DrawCircle(circlePosition, 10, Play::cRed);
}
Apple::~Apple()
{
	delete applePtr;
}
;

Apple *SpawnApple(bool random)
{
	if (!random) {
		Apple *apple = new Apple(posX, posY); // definiera apple som object från constr.
		//apple.Draw(); call draw in maingameupdate
		return apple;
	}
	else
	{
		Apple *apple = new Apple(); // definiera apple som object från constr.
		//apple.Draw(); //call draw in maingameupdate
		posX = apple->x;
		posY = apple->y;
		return apple;
	}
	//below does not happen
	Apple *apple = new Apple(posX, posY); // definiera apple som object från constr.
	apple->Draw();
	return apple;


};