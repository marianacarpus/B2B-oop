#ifndef UTILIZATOR_H
#define UTILIZATOR_H
#include<iostream>
#include<string>
using namespace std;

class utilizator
{
    public:
        string nume;
        string parola;
 string numei;
        string parolai;
        utilizator();
        ~utilizator();
      void logare();
      void memorare_utilizator_nou();
      void inregistrare_utilizator_nou();

protected:

    private:
};

#endif // UTILIZATOR_H
