#include "produs.h"

produs::produs() : ID(0), timp(0), pret(0), nume("")//initializare constructor in lista
{}

produs::~produs()//destructor implicit
{}

istream& operator>>(istream &c , produs &A)//supraincarca operatorul <<
{
   // if(c == cin)
   // {
        /*
        cout << "Produs ID: "; c >> A.ID;
        cout << '\n';
        cout << "Timp fabricatie produs: "; c >> A.timp;
        cout << '\n';
        cout << "Pretul produsului: "; c >> A.pret;
        cout << '\n';
        cout << "Nume produs: "; getline(c , A.nume);
    */}
   // else
   // {
        c >> A.ID;
        c >> A.timp;
        c >> A.pret;
        getline(c , A.nume);
        c.get();
   // }
    return c;
}
