#include "utilizator.h"
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;

utilizator::utilizator()
{

}

utilizator::~utilizator()
{
    //dtor
}

// memoreaza in fisier datele noi
void  utilizator::memorare_utilizator_nou()
{
    ofstream fis_utilizator ("date_firme_inregistrare.txt",ios::app);
    if (    !fis_utilizator.is_open())

    {

        fis_utilizator.open("date_firme_inregistrare.txt");

    }
    fis_utilizator << nume << " " << parola << endl;
    fis_utilizator.close();
}
// initializare inregistrare utilizator
void utilizator::inregistrare_utilizator_nou()
{
    cout << "Bun Venit!\n-------------------------\n\nInregistrare\nIntrodu numele firmei\n";

    cin >> nume;
    cout << "\nIntrodu parola:\n";
    cin >> parola;
    memorare_utilizator_nou();
}

//functia de logare in cont

void utilizator::logare()
{

    cout << "Introdu numele firmei:\n";
    cin >> numei;
    cout << "\nIntrodu parola:\n";
    cin >> parolai;
    string nume_parola = numei + " " + parolai; // cauta numele si parola
    int gasit;
    string linie;
    ifstream fis_utilizator;
    fis_utilizator.open ("date_firme_inregistrare.txt");
    if(fis_utilizator.is_open())//verifica daca fisierul este deschis
    {
        while(!fis_utilizator.eof())
        {
            getline(fis_utilizator,linie);
            if ((gasit = linie.find(nume_parola, 0)) != string::npos)     // verifica daca datele sunt gasite in fisier
               {
                   cout << "Acces permis!!\n\n Bun venit" << numei <<"!"<< endl;
                fis_utilizator.close();
                 break;
               }
               else
               {
                   cout<<"Parola sau nume gresit\n\n";
                   logare();
               }

               }
        //fis_utilizator.close();
    }
    else
        cout << "Nu se poate deschide date_firme_inregistrare.txt file." << endl;
}




