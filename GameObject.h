#include <iostream>
#ifndef GAME_OBJECT
#define GAME_OBJECT

#include "Point2D.h"

class GameObject
{
public:
	GameObject(char);
	GameObject(Point2D, int, char);
	Point2D GetLocation();
	int GetId();
	bool GetState();
	void ShowStatus();
	
protected:
	Point2D location;
	int id_num;
	char display_code;
	char state;
};

#endif