#pragma once
#include <string>
#include <iostream>

using namespace std;


class Book {

private :
	string name;
	string author;
	int ID;
	int num_of_book;
	
public:

	//»ý¼ºÀÚ
	Book(string name, string author, int ID, int num_of_book);

	void info_of_book();
	/*void loan_book();
	void return_book();
<<<<<<< HEAD
	void find();
	void print_book_info();
	void get_id();*/
=======
	int get_id(string name);
>>>>>>> d9599cca0150e389ce5241a0fee4e45eee8cfc3d

};