#pragma once
#include <string>
#include <iostream>

using namespace std;

class Book {

private:
	string name;
	string author;
	int ID;
	int num_of_book;

public:

	//생성자
	Book(string name, string author, int ID, int num_of_book);

	void info_of_book();
	bool loan_book();
	void return_book();
	int get_id(string name);

};