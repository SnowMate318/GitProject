#ifndef USERUI_H
#define USERUI_H
#include <iostream>
#include <windows.h>
#include <string.h>
#include "LibraryClass.h"


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

    LibraryClass lib;

    int menu;
    string title;
    int ID;

};
#endif
