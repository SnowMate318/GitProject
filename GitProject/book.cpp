#include "book.h"
using namespace std;

Book::Book(string name, string author, int ID, int num)
	: name(name), author(author), ID(ID), num_of_book(num) {}


void Book::info_of_book()
{
	cout << "책 이름 : " << name << "\n"
		<< "저자 : " << author << "\n"
		<< "ID : " << ID << "\n"
		<< "남은 수량 : " << num_of_book << endl;
}

void Book::loan_book()
{
}

void Book::return_book()
{
}

void Book::find()
{
}

void Book::print_book_info()
{
}

void Book::get_id()
{
}
