#include "book.h"
using namespace std;

Book::Book(string name, string author, int ID)
	: name(name), author(author), ID(ID) {}


void Book::info_of_book()
{
	cout << "책 이름 : " << name << "\n"
		<< "저자 : " << author << "\n"
		<< "ID : " << ID << endl;
}
