#pragma once
class Book;

class LibraryClass
{
public:
	void createBook(Book book);
	void deleteBook(int bookId);
	void findBook(int bookId);
	void rentBook(int bookId);
	void returnBook(int bookId);
};

