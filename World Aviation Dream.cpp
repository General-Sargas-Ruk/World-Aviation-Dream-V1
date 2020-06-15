#include "account.h"
#include "play.h"
using namespace std;
int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
    CursorInfo.bVisible = false; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
    unsigned long long year = 2020, money = 100000000;
    system("mode con cols=180 lines=51");
    system("color f0");
    for (int i = 0; i < 4; i++)
    {
        system("cls");
        for (int i = 0; i < 25; i++) cout << endl;
        for (int i = 0; i < 54; i++) cout << " ";
        cout << "                    W O R L D   A V I A T I O N   D R E A M";
        for (int i = 0; i < 15; i++) cout << "\n";
        cout << "Game Loading: ";
        for (int j = 0; j <= i; j++)
        {
            cout << "----------------------------------------";
        }
        cout << 25 * (i + 1) << "%";
        Sleep(800);
    }
    if (!load_game())
    {
        new_account();
        normal_play(1960,1,1,100000000);
    }
    return 0;
}
