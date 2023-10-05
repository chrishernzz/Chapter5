#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
#include<algorithm>
#include<map>
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt, double startRange, double endRange);

//precondition: goin to create a class of List
//postoncondition: going to pass in an int as the datatype for the list private 
class ApplicationVectorOrList{
private:
	//creating list of integers
	list<int> data;
public:
	//defualt constructor
	ApplicationVectorOrList();

	//member function to add an integer
	void addIntegerContainer(int value);
	//member function to delete an integer
	void deleteIntegerContainer(int value);
	//member function to display input integers
	void displayIntegersContainer();
	//using map to keep track of the frequency
	map<int, int> repeatedFreq() const;
	//display the frequencies
	void displayFreq();

	//member function for main menu
	void mainMenu();

};

