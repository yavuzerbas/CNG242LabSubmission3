/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question.This is my own work that is
done by myself only */

#include <iostream>
#include "EuroleagueTeamFanclub.h"

using std::cout;

int main()
{
	EuroleagueTeamFanclub e1("Anadolu Efes", 2021, 'P', "Turkey", 2521);
	EuroleagueTeamFanclub e2("Anadol Efes", 2022, 'P', "Turkey", 2712);
	e1.differences(e2);

	EuroleagueTeamFanclub e3("Anadolu Efes", 2020, 'S', "Turkey", 2521);
	EuroleagueTeamFanclub e4("Anadolu Efes", 2020, 'S', "Turkey", 2521);
	e3.differences(e4);

	e3.printClub();
}