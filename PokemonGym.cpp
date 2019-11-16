#include <iostream>

using namespace std;

#include "PokemonGym.h"

PokemonGym::PokemonGym():Building()
{

}

PokemonGym::PokemonGym (unsigned int max_training_units, unsigned int stamina_cost, double dollar_cost, unsigned int exp_points_per_unit, int in_id, Point2D in_loc):Building('G', in_id, in_loc)
{
	
}

double PokemonGym::GetDollarCost(unsigned int unit_qty)
{
	
}

unsigned int PokemonGym::GetStaminaCost(unsigned int unit_qty)
{
	
}

unsigned int PokemonGym::GetNumTrainingUnitsRemaining()
{
	
}

bool PokemonGym::IsAbleToTrain(unsigned int unit_qty, double budget, unsigned int stamina)
{
	
}

unsigned int TrainPokemon(unsigned int training_units)
{
	
}

bool PokemonGym::Update()
{
	
}

bool PokemonGym::IsBeaten()
{
	
}

void PokemonGym::ShowStatus()
{
	
}
