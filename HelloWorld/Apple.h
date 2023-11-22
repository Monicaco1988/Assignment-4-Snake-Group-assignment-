#pragma once
#include <Play.h>
#include <vector>
using std::vector;
class Apple // User: Edmin
{
public:
	vector <int> spawnX = { 10, 30, 50, 70, 90, 110, 130, 150, 270, 290, 310, 330, 350, 370, 390, 410, 430, 450, 470, 490, 510, 530, 550, 570, 590, 610, 630};
	vector <int> spawnY = { 10, 30, 50, 70, 90, 110, 130, 150, 270, 290, 310, 330, 350};

	//for (int k = 10; k < 660; k += 20) // x-dirr
	//{spawnX[k] = { k }};

	//for (int i = 10; i < 380; i += 20); // y-dirr

	int randomPositionX = rand() % spawnX.size();
	int randomPositionY = rand() % spawnY.size();

	int x;
	int y;
	Point2D circlePosition;

	Apple(const int x,const int y) // constructor kan v�lja v�rden som �pplet ska spawna p�
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

	void Draw2();

};

//Create an array with the set x values and y values that the circles is allowed to spawn in


