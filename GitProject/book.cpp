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

<<<<<<< HEAD
void Book::find()
{
}

void Book::print_book_info()
{
}

void Book::get_id()
{
}
=======
int Book::get_id(string name)
{
	return ID; 
}
>>>>>>> d9599cca0150e389ce5241a0fee4e45eee8cfc3d
