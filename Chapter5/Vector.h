#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include"Student.h"
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt, double startRange, double endRange);

//precondition: goin to create a class of Vector
//postoncondition: going to pass in the student class in my private vector
class Vector{
private:
	//calling the student class
	vector<student> data;
public: 
	//defualt constructor that will have the student class default constructor
	Vector();

	//member function to clear data
	void clearData();
	//member function to resize
	void resizeData();
	//member function to get front element
	void reserveData();
	//member function to read file
	void readFromFile(string& fileName);
	//member function to close file
	void closeFile(string& filename);
	//member function to pop back
	void popBackElement();
	//member function to get front element
	void printFrontElement();
	//member function to get back element
	void printBackElement();
	//member function to get the index element
	void lookForIndex();
	//member function to get the memory address of the first and last iterator, do it in reverse as well  
	void beginIterator();
	void endIterator();
	void beginEndIterator();
	void reverseBeginIterator();
	void reverseEndIterator();
	void reverseBeginAndEndIterator();
	//member function to erase a single element, after the first element
	void eraseIterator();
	//member function to erase the whole element using it
	void eraseRangeIterator();
	//member function to insert a new name, grade, and gpa after the first element
	void insertIterator();
	//member function to get the first data and swap to the other data (new vector) and goin to sort them
	void swapVector();
	void sortVector();

	//member function for main menu
	void mainMenu();
};
