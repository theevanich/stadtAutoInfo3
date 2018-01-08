// Tools file
using namespace std;

#include "tools.h"

int showMenu(string menuTitle, string menuText[], int Anz)
{
    int input;
    //int scanErg;

    while(1)
    {
        cout << menuTitle;
        printLine('=', menuTitle.length());
        for (int i = 0; i < Anz; i++)
           cout << menuText[i];

        cout << endl << "Ihre Wahl: ";
        cin >> input;
        cin.clear();
        cin.ignore( numeric_limits <streamsize> ::max(), '\n' );
        if (input >= 1 && input <= Anz)
            return input;
    }
}

void printLine(char sym, int lineLength)
{
    for(int i = 0; i < lineLength; i++)
    {
        cout << sym;
    }
    printf("\n\n");
}
