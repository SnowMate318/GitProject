#include "book.h"
using namespace std;

Book::Book(string name, string author, int ID, int num)
	: name(name), author(author), ID(ID), num_of_book(num) {}


void Book::info_of_book()
{
	cout << "å �̸� : " << name << "\n"
		<< "���� : " << author << "\n"
		<< "ID : " << ID << "\n"
		<< "���� ���� : " << num_of_book << endl;
}

void Book::loan_book()
{
}

void Book::return_book()
{
}


int Book::get_id()
{
	return ID; 
}
