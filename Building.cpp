#include <iostream>

using namespace std;

#include "Building.h"


Building::Building():GameObject('B')
{
	display_code = 'B';
	pokemon_count = 0;
	cout << "Building default constructed" << endl;
}

Building::Building(char in_code, int in_id, Point2D in_loc):GameObject(in_loc, in_id, in_code)
{
	id_num = in_id;
	location = in_loc;
	display_code = in_code;
	pokemon_count = 0;
	cout << "Building Constructed" << endl;
}

void Building::AddOnePokemon()
{
	pokemon_count++;
}

void Building::RemoveOnePokemon()
{
	pokemon_count--;
}

void Building::ShowStatus()
{
	if (pokemon_count == 1)
		cout << pokemon_count << " pokemon is in this building" << endl;
	else
		cout << pokemon_count << " pokemon are in this building" << endl;
}

bool Building::ShouldBeVisible()
{
	return true;
}
