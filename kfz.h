#ifndef KFZ_H
#define KFZ_H

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "enum.h"

class KFZ
{
    protected:
    private:
        int tankvolumen;
        int gewicht;
        int mietpreis;
        string name;
        string hersteller;
        Status status;
        Fahrzeugtyp typ;
        
    public:
        KFZ(string, string, Fahrzeugtyp, int, int, int);
        
        string getName() const;
        void setName(string);
        
        string getHersteller() const;
        void setHersteller();
        
        Status getStatus() const;
        void setStatus(Status);
        
        int getTankvolumen() const;
        void setTankvolumen(int);
        
        int getGewicht() const;
        void setGewicht(int);
        
        int getMietpries() const;
        void setMietpreis(int);
        
        Fahrzeugtyp getFahrzeugtyp() const;
        void setFahrzeugtyp(Fahrzeugtyp);
        
        getKFZ();
}

#endif