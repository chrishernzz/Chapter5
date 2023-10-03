#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
#include<algorithm>
#include"Student.h"
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt, double startRange, double endRange);

class List{
private:
	//calling the student class
	list<student> data;
public:
	//default constructor
	List();

	//member function to clear data
	void clearData();
	//member function to get front element
	void resizedData();
	//member function to read the data
	void readFromFilePushFront(string& fileName);
	//memember function to pop the front (delete first element front)
	void popFrontElement();
	//member function to print front element
	void printFrontElement();
	//member function that now reads the data but push back
	void readFromFilePushBack(string& fileName);
	//member function to close file
	void closeFile(string& filename);
	//member function to pop the back (delete last element back)
	void popBackElement();
	//member function to get back element
	void printBackElement();
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
	void swapList();
	void sortList();

	//member function to get the size
	//member function
	void mainMenu();
};

