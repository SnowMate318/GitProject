#pragma once
#include <string>
class Book {
	
private:
	int id;
	std::string name;
	std::string author;
	int bookCnt;

public:
	Book(
		int id, 
		std::string name, 
		std::string author, 
		int bookCnt) : 
		id(id), 
		name(name), 
		author(author),
		bookCnt(bookCnt) {};

	~Book() {}

	bool checkoutBook();
	void returnBook();
	void printInfo();

};