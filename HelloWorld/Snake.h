#pragma once
#include "game.h"
class Snake
{

//declare class methods, fields, constructor destructor, author: gregitator:
//fields:
private:
	Heading heading;
	//Heading
	SnakeBody *snakeBody;// = new SnakeBody()* [7];
	//A SnakePart pointer that points to a dynamically allocated array of snake parts.
	int snakeBodySize;
	//An integer that stores the number of snake parts in the array.
public:
	void Draw();
	void HandleInput();
	void Move();
	void AddPart();
	Snake();//constructor declaration
	//{ }//need default?
	~Snake();//destructor
};

