#include "book.h"
using namespace std;

Book::Book(string name, string author, int ID, int num)
	: name(name), author(author), ID(ID), num_of_book(num) {
}


void Book::info_of_book()
{
	cout << "책 이름 : " << name << "\n"
		<< "저자 : " << author << "\n"
		<< "ID : " << ID << "\n"
		<< "남은 수량 : " << num_of_book << endl;
}

bool Book::loan_book()
{
	if (num_of_book <= 0) {
		return false;
	}
	else {
		num_of_book--;
		return true;
	}
}

void Book::return_book()
{
	num_of_book++;
}

int Book::get_id(string name)
{
	return ID; 
}