#pragma once
#include <Play.h>
#include <vector>
using std::vector;

class Apple // User: Edmin
{
public:
	vector <int> spawnX = { 10, 30, 50, 70, 90, 110, 130, 150, 270, 290, 310, 330, 350, 370, 390, 410, 430, 450, 470, 490, 510, 530, 550, 570, 590, 610, 630};
	vector <int> spawnY = { 10, 30, 50, 70, 90, 110, 130, 150, 270, 290, 310, 330, 350};

	int randomPositionX = rand() % spawnX.size();
	int randomPositionY = rand() % spawnY.size();

	int x;
	int y;
	Point2D circlePosition;

	Apple(const int x,const int y) // constructor kan välja värden som äpplet ska spawna på
	{
		this->x = x;
		this->y = x;
		circlePosition = { x,y };
	};

	Apple()  // default constructor
	{
		this->x = spawnX[randomPositionX];
		this->y = spawnY[randomPositionY];
		circlePosition = { x,y };
	};
	
	void Draw();
	~Apple();
};
static Apple* applePtr; 
Apple* SpawnApple(bool random);



