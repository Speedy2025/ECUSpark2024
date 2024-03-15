#include <iostream>
#include <Windows.h>
#include "BattleStage.h"
#include "templates.h"

using namespace std;

int main()
{
    bool blnLost = false;
    int i = 0;
    int hp = 100;

    cout << "As a student at East Carolina University, you find yourself in a horrible situation.\n";
    Sleep(5000);
    cout << "Despite your not-so-best efforts, you failed all your classes by just one point!\n";
    Sleep(5000);
    cout << "As you beg the Dean to give you a second chance, they issue a challenge:\n\n";
    Sleep(5000);
    cout << "Enter the dungeon in front of the clock tower, hidden beneath the giant grate.\n";
    Sleep(5000);
    cout << "  If you make it out alive, you pass for the semester.\n";
    Sleep(3500);
    cout << "  If you fail, you'll never return to the surface.";
    Sleep(5500);

    cout << "\n\nEagar for the chance to pass and be in good academic standing, you jump in without a second thought to the consequences.";
    Sleep(4000);

    //Battle for your academic career!
    /*while (!blnLost && i++ < 5) {
        blnLost = BattleStage(i, hp);
    }*/

    
}
