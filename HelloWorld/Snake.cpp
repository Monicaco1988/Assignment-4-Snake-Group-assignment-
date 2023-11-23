#include "Snake.h"
#include "game.h"
#define PLAY_IMPLEMENTATION
//define class methods, author: gregitator:
//"Loops over all the snake parts and draws them"
void Snake::Draw()
{
	for (int i = 0; i < snakeBodySize; i++) {
		//Play::DrawCircle(SnakeBody::position, 10, Play::cWhite);
		Play::DrawCircle(snakeBody[i].position, 10, Play::cWhite);
	}
}
//"Checks for user input via the arrow keys, and sets the heading of the snake"
void Snake::HandleInput()
{
	// find enum or...
	// GameObject& obj_agent8 = Play::GetGameObjectByType(TYPE_AGENT8);
	if (Play::KeyDown(VK_UP))
	{
		heading = Heading::north; 
		//obj_agent8.velocity = { 0, -4 };
		//Play::SetSprite(obj_agent8, "agent8_climb", 0.25f);
	}
	else if (Play::KeyDown(VK_DOWN))
	{
		heading = Heading::south;
		//obj_agent8.acceleration = { 0, 1 };
		//Play::SetSprite(obj_agent8, "agent8_fall", 0);
	}
	else if (Play::KeyDown(VK_RIGHT))
	{
		heading = Heading::east;
	}
	else if (Play::KeyDown(VK_LEFT))
	{
		heading = Heading::west;
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
	/*for (int i = snakeBodySize - 1; i > 0; i++) {
		snakeBody[i] = snakeBody[i - 1];
		if (index 0) //move head
		{
			//north
			if (heading == Heading::north) 
			{
				snakeBody[i] = move;
				//move head north.
			}
			if (heading == Heading::south) 
			{
				snakeBody[i] = move;
				//move head south.
			}
			if (heading == Heading::west) {
				snakeBody[i] = move;
				//move head west.
			}
			if (heading == Heading::east) {
				snakeBody[i] = move;
				//move head east.
			}
		}
	}
	*/
}
//constructor definition
Snake::Snake()
{

	//Snake snake();
	heading = Heading::north;//north, south,east,west google enum class c++
	//https://stackoverflow.com/questions/18335861/why-is-enum-class-preferred-over-plain-enum
	//SnakeBody* snakeBody = new SnakeBody[2];	
	snakeBody = new SnakeBody[2];//snakeBody is a pointer from snake.h
	snakeBodySize = 2;
	for (int i = 0; i < snakeBodySize; i++)
	{
		snakeBody[i] = SnakeBody(); //new SnakeBody[i];
	}
	//do more?
	//		SnakeBody* snakeBody = new SnakeBody();//make it an array
			/*constructor
			The constructor should automatically setup the snake to have two initial snake parts.
			Make sure you also create a destructor that deletes any allocated memory.
			*/
}
//Destructor
Snake::~Snake()
{
	delete[]snakeBody;
}