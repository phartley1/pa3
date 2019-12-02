#include <iostream>

using namespace std;

#include "PokemonGym.h"

PokemonGym::PokemonGym():Building()
{
	display_code = 'G';
	max_number_of_training_units = 10;
	num_training_units_remaining = max_number_of_training_units;
	stamina_cost_per_training_unit = 1;
	dollar_cost_per_training_unit = 1.0;
	experience_points_per_training_unit = 2;
	state = NOT_BEATEN;
	cout << "PokemonGym default constructed" << endl;
}

PokemonGym::PokemonGym (unsigned int max_training_units, unsigned int stamina_cost, double dollar_cost, unsigned int exp_points_per_unit, int in_id, Point2D in_loc):Building('G', in_id, in_loc)
{
	display_code = 'G';
	id_num = in_id;
	location = in_loc;
	max_number_of_training_units = max_training_units;
	stamina_cost_per_training_unit = stamina_cost;
	experience_points_per_training_unit = exp_points_per_unit;
	dollar_cost_per_training_unit = dollar_cost;
	state = NOT_BEATEN;
	cout << "PokemonGym constructed" << endl;
}

double PokemonGym::GetDollarCost(unsigned int unit_qty)
{
	return (dollar_cost_per_training_unit*unit_qty);
}

unsigned int PokemonGym::GetStaminaCost(unsigned int unit_qty)
{
	return (stamina_cost_per_training_unit*unit_qty);
}

unsigned int PokemonGym::GetNumTrainingUnitsRemaining()
{
	return num_training_units_remaining;
}

bool PokemonGym::IsAbleToTrain(unsigned int unit_qty, double budget, unsigned int stamina)
{
	if(budget >= GetDollarCost(unit_qty) && stamina >= GetStaminaCost(unit_qty))
		return true;
	else
		return false;
}

unsigned int PokemonGym::TrainPokemon(unsigned int training_units)
{
	if(num_training_units_remaining >= training_units)
	{
		num_training_units_remaining -= training_units;
		return (experience_points_per_training_unit*training_units);
	}
	else if(num_training_units_remaining < training_units)
	{
		unsigned int temp = num_training_units_remaining*experience_points_per_training_unit;
		num_training_units_remaining = 0;
		return temp;
	}
}

bool PokemonGym::Update()
{
	if(num_training_units_remaining = 0 && display_code == 'G')
	{
		state = BEATEN;
		display_code = 'g';
		cout << display_code << id_num << " has been beaten." << endl;
		return true;
	}
	else
		return false;
}

bool PokemonGym::IsBeaten()
{
	if(num_training_units_remaining == 0)
		return true;
	else
		return false;
}

void PokemonGym::ShowStatus()
{
	cout << "Pokemon Gym Status: " << endl;
	Building::ShowStatus();
	cout << "Max number of training units: " << max_number_of_training_units << endl;
	cout << "Stamina cost per training unit: " << stamina_cost_per_training_unit << endl;
	cout << "Pokemon dollar per training unit: " << dollar_cost_per_training_unit << endl;
	cout << "Experience points per training unit: " << experience_points_per_training_unit;
	if(num_training_units_remaining == 1)
		cout << num_training_units_remaining << "training unit is remaining for this gym." << endl;
	else if(num_training_units_remaining <1 || num_training_units_remaining > 1)
		cout << num_training_units_remaining << "training units are remaining for this gym." << endl;
}