#include "book.h"
using namespace std;

Book::Book(string name, string author, int ID)
	: name(name), author(author), ID(ID) {}


void Book::info_of_book()
{
	cout << "å �̸� : " << name << "\n"
		<< "���� : " << author << "\n"
		<< "ID : " << ID << endl;
}
