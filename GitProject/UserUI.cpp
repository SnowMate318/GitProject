#include "UserUI.h"

static map<int, int> bookList;

// Ŀ�� �̵���
void UserUI::gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void UserUI::printMenu(void)
{
    while(1)
    {
        cout << "\n\n";
        cout << "==�޴�==\n";
        cout << " 1. å ��ȸ\n";
        cout << " 2. å ����\n";
        cout << " 3. å �ݳ�\n";
        cout << " 4. å ���� å Ȯ��\n";
        cout << " 5. ����\n";

        cout << "���Ͻô� �޴��� �������ּ��� : ";

        cin >> menu;
        switch (menu) {
        case 1:
            MenuFind();
            break;
        case 2:
            MenuRent();
            break;
        case 3:
            MenuReturn();
        case 4:
            RentList();
        case 5:
            return;
        }
    }

}
void UserUI::MenuFind(void)
{
    cout << "\n\n";
    cout << "==å ã��==\n";
    cout << "ã�� å�� ID�� �Է����ּ��� : ";

    cin >> ID;
    lib.findBook(ID);

}
void UserUI::MenuRent(void) 
{
    cout << "\n\n";
    cout << "==å ����==\n";
    cout << "���� å�� ID�� �Է����ּ��� :";

    cin >> ID;
    rent = lib.rentBook(ID);
    if(rent) bookList[ID] += 1;

}
void UserUI::MenuReturn(void) 
{
    cout << "\n\n";
    cout << "==å �ݳ��ϱ�==\n";
    cout << "�ݳ��� å�� ID�� �Է����ּ��� :";

    cin >> ID;
    lib.returnBook(ID);
    bookList[ID] -= 1;
    if (bookList[ID] <= 0) bookList.erase(ID);

}
void UserUI::RentList(void)
{
    cout << "\n\n";
    cout << "å ID \t\t ����(��)\n ";
    for(auto& book : bookList) {
        cout << book.first << "\t\t" << book.second <<"\n";
    }
}