/* Yavuz Erbas – 2243426
I read and accept the submission rules and the extra rules specified in each question.This is my own work that is
done by myself only */

#include <iostream>
#include "MyString.h"

#pragma once
using std::cout;

class EuroleagueTeamFanclub
{
private:
	char* the_name_of_the_team = new char[50];
	int year;
	char condition;
	char* originCountry = new char[50];
	int numberOfMembers;
public:
	EuroleagueTeamFanclub() {//giving default values

		strcpy(this->the_name_of_the_team, "default name");
		this->year = 0; 
		this->condition = 'U'; // Unknown
		strcpy(this->originCountry, "Default country name");
		this->numberOfMembers = 0;

	}
	EuroleagueTeamFanclub(const char name[],int year,char condition,const char originCountry[],int numberOfMembers) {//wanted constructor

		strcpy(this->the_name_of_the_team, name);
		this->year = year;
		if ((condition == 'P') || (condition == 'S')) {
			this->condition = condition;
		}
		else{
			cout << "\nUnknow condition entered to constructor. Auto set to 'U'!\n\n";
			this->condition = 'U'; // Unknown
		}
		strcpy(this->originCountry, originCountry);
		if (numberOfMembers >= 0) {
			this->numberOfMembers = numberOfMembers;
		}
		else {
			cout << "\nThe number of members cannot be a negative integer!\nAuto set to 0\n\n";
			this->numberOfMembers = 0;
		}
	}
	EuroleagueTeamFanclub(const EuroleagueTeamFanclub& euroleagueTeamFanclub) {//copy constructor

		strcpy(this->the_name_of_the_team, euroleagueTeamFanclub.the_name_of_the_team);
		this->year = euroleagueTeamFanclub.year;
		this->condition = euroleagueTeamFanclub.condition;
		strcpy(this->originCountry, euroleagueTeamFanclub.originCountry);
		this->numberOfMembers = euroleagueTeamFanclub.numberOfMembers;
	}
	~EuroleagueTeamFanclub() { //destructor
		delete[] this->the_name_of_the_team;
		delete[] this->originCountry;
	}

	char* get_the_name_of_the_team() {
		return this->the_name_of_the_team;
	}
	int getYear() {
		return this->year;
	}
	char getCondition() {
		return this->condition;
	}
	char* getOriginCountry() {
		return this->originCountry;
	}
	int getNumberOfDoses() {
		return this->numberOfMembers;
	}
	void set_the_name_of_the_team(char* name) {
		strcpy(this->the_name_of_the_team, name);
	}
	void setYear(int year) {
		this->year = year;
	}
	void setCondition(char condition) {
		if ((condition == 'P') || (condition == 'S')) {
			this->condition = condition;
		}
		else {
			this->condition = 'U'; // Unknown
			cout << "\nInccorrect condition tried to be set. Auto set to 'U' unknown condition!\n\n";
		}
	}
	void setOriginCountry(char* originCountry) {
		strcpy(this->originCountry, originCountry);
	}
	void setNumberOfMembers(int numberOfMembers) {
		if (numberOfMembers >= 0) {
			this->numberOfMembers = numberOfMembers;
		}
		else {
			cout << "\nThe number of members cannot be a negative integer!\n\n";
		}
	}
	void addFan(int newMemberNumbers) {
		this->numberOfMembers += newMemberNumbers;
	}

	void printClub() {
		cout << "Team name: " << this->the_name_of_the_team << "\n";
		cout << "Year: " << this->year << "\n";
		if (this->condition == 'P') {
			cout << "Condition: Pandemic continues\n";
		}
		else if (this->condition == 'S') {
			cout << "Condition: Season open for supporters\n";
		}
		else {
			cout << "Unknown condition!\n";
		}
		cout << "Country: " << this->originCountry << "\n";
		cout << "The Number of Members: " << this->numberOfMembers << "\n\n";
	}

	void differences(const EuroleagueTeamFanclub& euroleagueTeamFanclub) {
		int key = 1;
		cout << "Output:\n";
		if (MyString::myStrCmp(this->the_name_of_the_team, euroleagueTeamFanclub.the_name_of_the_team) != 1) {
			cout << "The fan club name is different\n";
			key = 0;
		}
		if (this->year != euroleagueTeamFanclub.year) {
			cout << "The year is different\n";
			key = 0;
		}
		if (this->condition != euroleagueTeamFanclub.condition) {
			cout << "The condition is different\n";
			key = 0;
		}
		if (MyString::myStrCmp(this->originCountry, euroleagueTeamFanclub.originCountry) != 1) {
			cout << "The origin country is different\n";
			key = 0;
		}
		if (this->numberOfMembers != euroleagueTeamFanclub.numberOfMembers) {
			cout << "The number of fans is different\n";
			key = 0;
		}
		if (key) {
			cout << "Their all attributes are the same!\n";
		}
		cout << "\n";
	}
};