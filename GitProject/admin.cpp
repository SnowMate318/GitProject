//
// Created by DSO8 on 25. 8. 20.
//

#include "Admin.h"
#include "LibraryClass.h"

LibraryClass lib;

void Admin::printMenu(){
	cout << "== ������ ��� ==\n\n";
	cout << "�޴��� �����ϼ���\n";
	cout << "1. å ��ȸ�ϱ� \n2. å ����ϱ� \n3. å �����ϱ� \n\n";

	int select;
	cin >> select;

	switch (select) {
	case 1:
		// å ��ȸ
		break;
	case 2:
		// å ���
		break;
	case 3:
		// å ����
		break;
	default:
		cout << "�Է��� �ùٸ��� �ʽ��ϴ�\n";
		break;
	}

}

void Admin::findBookFromAdmin(){
	int bookId;

	cout << "��ȸ�� å ���̵� �ۼ��ϼ���: ";
	cin >> bookId;

	lib.findBook(bookId);
}

void Admin::addBookFromAdmin(){
	
}

void Admin::removeBookFromAdmin(){

}