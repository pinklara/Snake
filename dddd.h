#include <iostream>
#include <windows.h>
#include <math.h>
#include <thread>
#include <locale>
#include "time.h"
#include "conio.h"

using namespace std;
int x=0, y=0, cx=0, cy=0, timer=0;
void mouse();
void gotoxy(int x, int y);
void startgame();
void hidecursor();
void cls();

void mouse(){
    POINT(pointcursor);
        GetCursorPos(&pointcursor);
        cx=((pointcursor.x)/12);
        cy=((pointcursor.y)/12);
        gotoxy(0,0);
        cout<<"X: "<<pointcursor.x<<" Y:"<<pointcursor.y<<endl;
        }

void gotoxy(int x, int y){
    COORD point;
    point.X = x;
    point.Y = y;
    SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), point);
}
void startgame(){
    Sleep(0016);
    gotoxy(3,3);
    cout<<"BEM VINDO :)";
    gotoxy(3,4);
    cout<<"by: Lara Freitas";
    Sleep(800);
    system("cls");
}
void fullscreen(){
keybd_event ( VK_MENU, 0x36, 0, 0 );
keybd_event ( VK_RETURN, 0x1C, 0, 0 );
keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
}
void hidecursor(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void cls(){
    system("cls");
}

void gamemap (){
        int mx=0,my=0;
        while (mx<160 && mx>=0){
            gotoxy(mx,my);
            cout<<"|";
            gotoxy(mx,46);
            cout<<"|";
            mx++;
        }while (my<47 && my>=0){
            gotoxy(mx,my);
            cout<<"|";
            gotoxy(0,my);
            cout<<"|";
            my++;
            if (my==47){
            gotoxy(0,0);
            }
        }
        }
void exitgame(){
    system("color 0F");
    cls();
    gotoxy(3,3); cout<<"created by Lara Freitas :)";
    gotoxy(3,20); cout<<" ";
    Sleep(0700);
    }
    void PTbr(){
setlocale(LC_ALL, "Portuguese");}
