#define PLAY_IMPLEMENTATION
#define PLAY_USING_GAMEOBJECT_MANAGER
#include "Play.h"
#include "Apple.h"

int DISPLAY_WIDTH = 640;
int DISPLAY_HEIGHT = 360;
int DISPLAY_SCALE = 2;

int x = 10;
int y = 10;

// The entry point for a PlayBuffer program
void MainGameEntry( PLAY_IGNORE_COMMAND_LINE )
{
	Play::CreateManager( DISPLAY_WIDTH, DISPLAY_HEIGHT, DISPLAY_SCALE );
}

// Called by PlayBuffer every frame (60 times a second!)
bool MainGameUpdate(float elapsedTime)
{
	Play::ClearDrawingBuffer(Play::cBlack);


	for (int k = 10; k < 660; k+=20) // check to see where the apples should spawn and where the anake should move
	{
		for (int i = 10; i < 380; i += 20)
		{
			Apple apple = Apple(k, i); // definiera apple som object från constr.
			apple.Draw2();
		};
	};
	
	Apple apple = Apple(x,y); // definiera apple som object från constr.
	apple.Draw();

	if (Play::KeyPressed(VK_UP))
	{
		Apple apple = Apple(); // definiera apple som object från constr.
		apple.Draw();
		x = apple.x;
		y = apple.y;
	};


	Play::PresentDrawingBuffer();
	return Play::KeyDown( VK_ESCAPE );
}

// Gets called once when the player quits the game 
int MainGameExit( void )
{
	Play::DestroyManager();
	return PLAY_OK;
}
