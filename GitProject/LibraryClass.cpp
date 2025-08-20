#include "LibraryClass.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

static map<int, Book*> bookList;

void LibraryClass::createBook(Book* book)
{
	bookList[book->get_id()] = book;
}

void LibraryClass::findBook(int bookId)
{	
	// å�� ��ϵǾ� �ִ��� Ȯ��
	if (bookList[bookId] != nullptr) {
		if (bookList[bookId]->loan_book()) {
			cout << "å�� �ֽ��ϴ�. " << "�뿩 �����մϴ�." << endl;
		}
		else {
			cout << "å�� �ֽ��ϴ�. " << "���� �뿩��." << endl;
		}
	}
	else {
		cout << "��ϵ� å�� �ƴմϴ�. " << endl;
	}
}

void LibraryClass::rentBook(int bookId)
{
	// å�� ��ϵǾ� �ִ��� Ȯ��
	if (bookList[bookId] != nullptr) {
		// å�� ��� ���� �ִ��� Ȯ��
		if (bookList[bookId]->loan_book()) {
			// ���� ������ �����ְ�
			cout << "�뿩 �Ϸ�" << endl;
		}
		else {
			// ������ �������شٴ� �޽����� ����Ѵ�.
			cout << "�뿩 �Ұ�. ��� ����." << endl;
		}
	}
	else {
		// ��ϵǾ� ���� ���� å�̸� ��� �ȵ� �޽��� ���
		cout << "��ϵǾ� ���� ���� å�Դϴ�." << endl;
	}
}

void LibraryClass::rentBook(int bookId)
{
}

void LibraryClass::returnBook(int bookId)
{
}

void LibraryClass::deleteBook(int bookId)
{
	// bookList���� bookId�� �ش��ϴ� �׸� ���� �� 
	bookList.erase(bookId);

	// �Ϸ� �޽��� ���
	cout << "�����Ǿ����ϴ�." << endl;
}


//void LibraryClass::returnBook(int bookId)
//{
//
//}