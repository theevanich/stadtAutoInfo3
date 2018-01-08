// class KFZ
using namespace std;

#include "kfz.h"

KFZ::KFZ(string n, string h, Fahrzeugtyp ft, int tv, int gw, int mp)
:name(n), hersteller(h), typ(ft), tankvolumen(tv), gewicht(gw), mietpreis(mp)
{
    cout << "KFZ Objekt angelegt" << endl;
}

KFZ::~KFZ()
{
    cout << "KFZ Objekt wurde vernichtet" << endl;
}

void KFZ::anzeige()
{
    
}