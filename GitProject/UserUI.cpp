#include "UserUI.h"



// Ŀ�� �̵���
void UserUI::gotoxy(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void UserUI::printMenu(void)
{
    system("cls");
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
    }

}
void UserUI::MenuFind(void)
{
    system("cls");
    cout << "==å ã��==";
    cout << "ã�� å�� ID�� �Է����ּ��� : ";

    cin >> ID;
    lib.findBook(ID);

}
void UserUI::MenuRent(void) 
{
    system("cls");
    cout << " å ������";
}
void UserUI::MenuReturn(void) 
{
    system("cls");
    cout << " å �ݳ��ϱ�";
}
void UserUI::Quit(void) {
    system("cls");
    cout << " ����";
}