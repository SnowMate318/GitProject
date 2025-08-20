#ifndef USERUI_H
#define USERUI_H
#include <iostream>
#include <windows.h>

using namespace std;

class UserUI
{
public:
    void gotoxy(int x, int y);
    void printMenu(void);
    void MenuFind(void);
    void MenuRent(void);
    void MenuReturn(void);
    void Quit(void);
    int menu;
};
#endif
