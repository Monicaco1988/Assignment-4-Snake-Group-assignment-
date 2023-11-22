#include "Snake.h"
#include "game.h"
#define PLAY_IMPLEMENTATION
//define class methods, author: gregitator:
//"Loops over all the snake parts and draws them"
void Snake::Draw()
{

}
//"Checks for user input via the arrow keys, and sets the heading of the snake"
void Snake::HandleInput()
{
	// find enum or...
	// GameObject& obj_agent8 = Play::GetGameObjectByType(TYPE_AGENT8);
	if (Play::KeyDown(VK_UP))
	{

		//obj_agent8.velocity = { 0, -4 };
		//Play::SetSprite(obj_agent8, "agent8_climb", 0.25f);
	}
	else if (Play::KeyDown(VK_DOWN))
	{
		//obj_agent8.acceleration = { 0, 1 };
		//Play::SetSprite(obj_agent8, "agent8_fall", 0);
	}
	else if (Play::KeyDown(VK_RIGHT))
	{
	
	}
	else if (Play::KeyDown(VK_LEFT))
	{

	}
	else
	{
		//Play::SetSprite(obj_agent8, "agent8_hang", 0.02f);
		//obj_agent8.velocity *= 0.5f;
		//obj_agent8.acceleration = { 0, 0 };
	}
	//Play::UpdateGameObject(obj_agent8);
}

//Move() - Loops over the snake parts in reverse (skipping the part at index 0) and 
//updates the positions of the parts to be the "next" elements position. 
//Ex. the snake part at index 6 will take the position of the part at index 5, 
//which takes the position of the part at index 4, etc.
//Moves the part at index 0 (head) along the heading of the snake by updating its position.
void Snake::Move()
{

}
//fix constructor definition
Snake::Snake()
{
	heading = {1,0,0,0};//north, south,east,west google enum class c++
	snakeBody = new SnakeBody[2];
	snakeBodySize = 7;
	//do more?
	//		SnakeBody* snakeBody = new SnakeBody();//make it an array
			/*constructor
			The constructor should automatically setup the snake to have two initial snake parts.
			Make sure you also create a destructor that deletes any allocated memory.
			*/
}

// User-Defined Destructor
