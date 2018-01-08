using namespace std;
#include <iostream>
#include "tools.h"
#include "kfz.h"
#include "enum.h"

int main()
{
    cout << "yeah man" << endl;
    printLine('$', 20);
    
    int select;
    string menuTitle = "*** Verwaltung des StadtAuto-Fuhrparks ***\n";

    string menuText[] =
    {
        "1. PKW neu aufnehmen\n",
        "2. LKW neu aufnehmen\n",
        "3. Motorrad neu aufnehmen\n",
        "4. Wohnwagen neu aufnehmen\n",
        "5. Fuhrpark anzeigen\n",
        "6. Programm beenden\n"
    };
    
    KFZ car1("", "", Fahrzeugtyp::PKW, 1, 1, 1);
    
    // select = showMenu(menuTitle, menuText, 6);
    
    
    // do
    // {
        // select = getMenu(menuTitle,menuText, 8);
        // switch(select)
        // {
            // case 1:
                //insert();
                // break;
            // case 2:
                // break;
            // case 3:
                // break;
            // case 4:
                // break;
            // case 5:
                // break;
            // case 6:
                // break;
            // case 7:
                // if(askagain("Möchten Sie die Daten speichern? (y/n):"))
                // {
                    // if(MediaCounter > 0)
                    // {
                        // saveMedia();
                    // }
                    // else
                    // {
                        // printf("\nKeine Datei vorhanden!\n");
                    // }
                // }
                // break;
        // }

    // } while(select != 7);
    
    
    return 0;
}
