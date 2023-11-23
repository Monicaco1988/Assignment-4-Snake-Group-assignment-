#include "Snake.h"
#include "game.h"
#define PLAY_IMPLEMENTATION
//defines how many pixels the snake should move when the snakes moves
int pixelsPerFrame = 20;
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
void Snake::HandleInput()//user Björn fixed movement
{
	// find enum or...
	// GameObject& obj_agent8 = Play::GetGameObjectByType(TYPE_AGENT8);
	if (Play::KeyDown(VK_UP))
	{
		heading = Heading::north; 
		for (int i = snakeBodySize - 1; i >= 0; i--)
		{
			if (i != 0) {
				snakeBody[i].position = snakeBody[i - 1].position;
			}
			else
			{
				snakeBody[i].position -= {0, pixelsPerFrame};
			}

		}
		//obj_agent8.velocity = { 0, -4 };
		//Play::SetSprite(obj_agent8, "agent8_climb", 0.25f);
	}
	else if (Play::KeyDown(VK_DOWN))
	{
		heading = Heading::south;
		for (int i = snakeBodySize - 1; i >= 0; i--)
		{
			if (i != 0) {
				snakeBody[i].position = snakeBody[i - 1].position;
			}
			else
			{
				snakeBody[i].position += {0, pixelsPerFrame};
			}

		}
		//obj_agent8.acceleration = { 0, 1 };
		//Play::SetSprite(obj_agent8, "agent8_fall", 0);
	}
	else if (Play::KeyDown(VK_RIGHT))
	{
		heading = Heading::east;
		for (int i = snakeBodySize-1; i >= 0; i--)
		{
			if (i != 0) {
				snakeBody[i].position = snakeBody[i - 1].position;
			}
			else
			{
				snakeBody[i].position += {pixelsPerFrame, 0};
			}
			
		}
	}
	else if (Play::KeyDown(VK_LEFT))
	{
		heading = Heading::west;
		for (int i = snakeBodySize - 1; i >= 0; i--)
		{
			if (i != 0) {
				snakeBody[i].position = snakeBody[i - 1].position;
			}
			else
			{
				snakeBody[i].position -= {pixelsPerFrame, 0};
			}

		}
	}
	else
	{
		for (int i = snakeBodySize - 1; i >= 0; i--)
		{
			if (i != 0) {
				snakeBody[i].position = snakeBody[i - 1].position;
			}
			else
			{
				if (heading == Heading::north)
				{
					snakeBody[i].position -= {0, pixelsPerFrame};
				}
				else if(heading == Heading::south)
				{
					snakeBody[i].position += {0, pixelsPerFrame};
				}
				else if (heading == Heading::west)
				{
					snakeBody[i].position -= {pixelsPerFrame, 0};
				}
				else if (heading == Heading::east)
				{
					snakeBody[i].position += {pixelsPerFrame, 0};
				}

			}

		}
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
	for (int i = snakeBodySize - 1; i > 0; i--) {
		snakeBody[i] = snakeBody[i - 1];
		if (i==1) //move head
		{
			//north
			if (heading == Heading::north) 
			{
				//snakeBody[i].position.y-=20;//one grid up movement
				//move head north.
				snakeBody[i].position.y -= 20;
			}
			if (heading == Heading::south)
			{
				snakeBody[i].position.y+=20;
				//move head south.
			}
			if (heading == Heading::west) {
				snakeBody[i].position.x-= 20;
				//move head west.
			}
			if (heading == Heading::east) {
				snakeBody[i].position.x+=20;
				//move head east.
			}
		}

	}
	
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
	//set position of tail snakePart
	snakeBody[1].position.y += 20;//tail to south one grid: y increases means go down
	//snakeBody[0].position = normalize({1, -1}) * 2;
	
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