#ifndef MENIU_H_INCLUDED
#define MENIU_H_INCLUDED
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include<stdio.h>
#include<iomanip>
#include"utilizator.h"
#include<vector>
#include"produs.h"


using namespace std;
int logare_cont();
int creare_cont();
int confirmare();
int plata();
int meniu();
int produse();
int home();
int livrare();
    int iesire()
{
    system("color 0f");
    system("title IESIRE");
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"_______________________________________________________________________________"<<endl;
    cout<<"|                       ATI ALES SA IESITI DIN PROGRAM                        |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                             Realizat de:                    |"<<endl;
    cout<<"|                                             Carpus Mariana                  |"<<endl;
    cout<<"|                                             Grupa: 3122b                    |"<<endl;
    cout<<"|                                             e-mail: mariana.carpus@gmail.com|"<<endl;
    cout<<"|_____________________________________________________________________________|"<<endl<<endl<<endl;

    return 0;

}
int meniu()
{
    string Menu[7] = {"Logare firma-client*"," Creare cont- firma noua * ","Vizualizare produse","Confirmare comanda", "Stabiire mod de plata","Preluare produse-stabilirea modului de livrare produse","Exit"};
    int pointer = 0;

    while(true)
    {

        system("title Home");
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"_________________________________________________________________________"<<endl;
        cout<<"||______________________________________________________________________||"<<endl;
        cout<<"||           Firma productie                                            || "<<endl;
        cout<<"||======================================================================||"<<endl;

        for (int i = 0; i < 7; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                cout <<"|| *"<<setw(20)<< Menu[i]<<setw(40)<<"||" << endl;
                cout<<"||____________________________________________________________________||"<<endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
                cout <<"|| *"<<setw(20)<< Menu[i]<<setw(40)<<"||" << endl;
                cout<<"||____________________________________________________________________||"<<endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 6;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                pointer += 1;
                if (pointer == 7)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {
                    logare_cont();

                }
                break;
                case 1:
                {
                    do{

                    creare_cont();
                    }while(!VK_ESCAPE);

                }
                break;
                case 2:
                { do{
                    produse();
                    Sleep(10000);
                }while(VK_ESCAPE);
                }
                break;
                case 3:
                {
                    confirmare();
                }
                break;
                case 4:
                {
                    plata();
                }
                break;
                case 5:
                {
                    livrare();
                }
                break;
                case 6:
                {
                    iesire();
                    Sleep(4000);
                    return 0;

                }
                break;

                }
                break;
            }
        }

        Sleep(150);
    }

    return 0;
}
int logare_cont()
{
    string Menu[5] = {"NUME UTILIZATOR:", "Parola:","*creare cont nou","mergeti mai departe", "Reintoarcere meniu principal"};
    int pointer = 0;

    while(true)
    {
        system("cls");
        system("title Logare in cont");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "Logare in cont\n\n";
        cout<<"......................................................."<<endl;
        cout<<"           _________________________________________ "<<endl;

        for (int i = 0; i < 5; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout <<setw(12)<<"|"<<setw(5)<< Menu[i] <<setw(15)<<"|"<< endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << setw(12)<<"|"<<setw(5)<<Menu[i] <<setw(15)<<"|"<< endl;
            }
        }
        cout<<"           _________________________________________ "<<endl;

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {Sleep(550);
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 4;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {Sleep(150);
                pointer += 1;
                if (pointer == 5)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
               Sleep(1000);
                switch (pointer)
                {
                case 0:
                {

                     utilizator a;
                         a.logare();

                    Sleep(2000);
                    produse();

                }
                break;
                case 1:
                {
                         utilizator a;
                         a.logare();
                         Sleep(1000);
                    produse();


                }
                break;
                case 2:
                {
                    creare_cont();

                }
                break;
                case 3:
                {
                    produse();
                }
                break;

                case 4:
                {
                    home();
                    Sleep(4000);


                }
                break;
                }
                break;
            }
        }

        Sleep(1000);
    }

    return 0;
}
int creare_cont()
{
    string Menu[4] = {"Denumire firma:", "parola:","confirmati parola:","mergeti mai departe..."};
    int pointer = 0;

    while(true)
    {
        system("cls");
        system("title Creare cont");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout <<setw(20)<< "Creare cont nou\n\n";
        cout<<"..........................................................................."<<endl<<endl;

        for (int i = 0; i < 4; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout <<setw(10)<<"&&   "<<setw(10)<< Menu[i] << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout <<setw(10)<<"&&   "<<setw(10)<< Menu[i] << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
            }
        }
        cout<<"..........................................................................."<<endl<<endl;

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 3;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                pointer += 1;
                if (pointer == 4)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {  utilizator a;
                     ifstream fis_utilizator ("date_firme_inregistrare.txt");
                    // long inceput, sfarsit;
                     if(fis_utilizator.is_open())
                     {
                         a.inregistrare_utilizator_nou();
                     }
                    produse();


                    Sleep(1000);
                }
                break;
                case 1:
                {
                    return 0;
                }
                break;
                case 2:
                {
                    return 0;
                }
                break;
                case 3:
                {
                    produse();
                    return 0;
                }
                break;
                }
                break;
            }
        }

        Sleep(550);
    }

    return 0;
}
void selectie()
{
    int N = 0, suma = 0;
    unsigned int maxx = 0, nr=0 , selecteaza[101], i = 0;
    cout << "Cate produse doriti sa selectati ?";
    cin >> N;
    cout<<"Introduceti numarul aferent produsului!\n\n**ATENTIE numerele vor fi scrise in ordine crescatoare\n\n";

    for(int j = 0 ; j < N ; j++)
        cin >> selecteaza[j];
    produs A;
    ifstream citeste("store.txt");
    while(citeste >> A)
    {
        //cout << A.ID << endl;
        if(A.ID == selecteaza[i])
        {
            if(A.timp > maxx)
                maxx = A.timp;
            suma+= A.pret;
            ++i;

        }
    }
    if(i != 0)
    {
       cout <<"Ati comandat "<<i<<"produse"<<endl<<endl;
    cout<<"Aveti de platit:  "<<suma;
    cout<<"...................................\n";
    cout<<"Comanda va fi livrata in "<<maxx<<" zile"<<endl<<endl;
    }
    else
        cout << "ID-urile nu au fost introduse in ordinea corecta.";

}

int produse()
{
    system("cls");
    system("color 8");
    system ("title PRODUSE");
          string x;
        ifstream fis;
        fis.open("produsele.txt");
        if(fis.is_open()){
          while (getline(fis,x)) {
        cout <<"||    "<<setw(15)<< x << endl ;
    }
    fis.close();
        }
        cout<<"\n\n\n========================================================================\n\n";
        cout<<"1. Alegeti produsele\n 2.  Intoarcere la meniu principal\n\n";
        int pointer;
        cout<<"Introduceti optiunea dorita";
        cin>>pointer;
        switch(pointer)
        {
            case 1:
                {
                    selectie();
                    Sleep(5000);

                confirmare();
                }
                break;
            case 2:
                home();
                break;
        }
}
int confirmare()
{
    string Menu[2] = {"DA", "NU"};
    int pointer = 0;

    while(true)
    {
        system("cls");
        system("title Confirmare Comanda");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "\n\nPlasati comanda?\n\n";

        for (int i = 0; i < 2; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);//selecteaza optiunea
                cout << Menu[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);//asfiseaza optiunea
                cout << Menu[i] << endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)//asteapta pana cand este apasata sageata sus
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 1;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)//asteapta pana cand este apasata sageata jod
            {
                pointer += 1;
                if (pointer == 2)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {
                    Sleep(1000);
                    plata();

                }
                break;
                case 1:
                {
                    iesire();
                    return 0;
                }
                break;
                }
                break;
            }
        }

        Sleep(150);
    }

    return 0;
}
int plata()
{
    system("cls");
        system("title Stabilire mod de plata");
        system("color 30");
         cout << "Cum doriti sa achitati comanda?\n\n";
         cout<< "1. Virament bancar"<<endl<< "2. plata cash-la livrare"<<endl<<"3.plata cu card- la livrare"<<endl<<"4. Iesire"<<endl;
         int p;
         cout<<"Alegeti modul de plata:";
         cin>>p;
         switch(p)
         {
         case 1:{
             char c;
             cout<<"Ati ales sa platiti prin virament bancar!\n Introduceti contul dumneavoastra:\n";
             cin>>c;
             cout<<"Acesta este contul dumneavoastra: "<<c<<"\nMultumim!\n\n";
             Sleep(2000);
             livrare();
         }
            break;

         case 2:{
             cout<<"Ati ales sa platiti cu cardul la livrare!\n Multumim!\n";
              Sleep(2000);
             livrare();}
            break;
         case 3:
             {
                 cout<<"Ati ales sa platiti cu cardul la livrare!\n Multumim!\n";
                  Sleep(2000);
             livrare();
                              }
            break;
         case 4:{
            iesire();
            Sleep(4000);
            exit(0);
         }
            break;
         }


}
int plata_()
{
    string Menu[3] = {"@ Virament bancar", "@ plata cash-la livrare","@ plata cu card- la livrare"};
    int pointer = 0;

    while(true)
    {
        system("cls");
        system("title Stabilire mod de plata");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "Cum doriti sa achitati comanda?\n\n";

        for (int i = 0; i < 3; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << Menu[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << Menu[i] << endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)//asteapta pana cand este apasata sageata sus
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 2;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)//asteapta pana cand este apasata sageata jos
            {
                pointer += 1;
                if (pointer == 3)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0) //asteapta pana este apasata tasta
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {

                } break;
                case 1:
                {
                    return 0;
                }
                break;
                }
                break;
            }
        }

        Sleep(150);
    }

    return 0;

}
//meniu livrare produse
int livrare()
{
    string Menu[2] = {"-> Livrare prin curier", "-> Preluare produse de la sediu"};
    int pointer = 0;

    while(true)
    {
        system("cls");
        system("title Livrare");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "Livrarea \n\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";

        for (int i = 0; i < 2; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << Menu[i] << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << Menu[i] << endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)//asteapta pana cand este apasata sageata sus
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 1;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)//asteapta pana cand este apasata sageata jos
            {
                pointer += 1;
                if (pointer == 2)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)//asteapta pana cand este apasata tasta
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {
                    cout<<"Va trebui sa suportati costuri suplimentare, iar livrarea va fi realizata cu intarziere de 2 zile\n\n\n";
                    cout<<"Va multumim!!";
                    Sleep(4000);
                    iesire();
                    Sleep(1000);
                    return 0;

                } break;
                case 1:
                {
                    cout<<"Va multumim pentru comanda !!";
                    Sleep(3000);
                    iesire();
                    Sleep(1000);
                    return 0;

                }
                break;
                }
                break;
            }
        }

        Sleep(150);
    }

    return 0;

}
//copie meniu principal, pentru a fi utilizata in functii
int home()
{
    string Menu[7] = {"Logare firma-client*"," Creare cont- firma noua * ","Vizualizare produse","Confirmare comanda", "Stabiire mod de plata","Preluare produse-stabilirea modului de livrare produse","Exit"};
    int pointer = 0;

    while(true)
    {

        system("title Home");
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout<<"_________________________________________________________________________"<<endl;
        cout<<"||______________________________________________________________________||"<<endl;
        cout<<"||           Firma productie                                            || "<<endl;
        cout<<"||======================================================================||"<<endl;

        for (int i = 0; i < 7; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
                cout <<"|| *"<<setw(20)<< Menu[i]<<setw(40)<<"||" << endl;
                cout<<"||____________________________________________________________________||"<<endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
                cout <<"|| *"<<setw(20)<< Menu[i]<<setw(40)<<"||" << endl;
                cout<<"||____________________________________________________________________||"<<endl;
            }
        }

        while(true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)//asteapta pana cand este apasata sageata sus
            {
                pointer -= 1;
                if (pointer == -1)
                {
                    pointer = 6;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)//asteapta pana cand este apasata sageata jos
            {
                pointer += 1;
                if (pointer == 7)
                {
                    pointer = 0;
                }
                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            { Sleep(1000);
                switch (pointer)
                {
                case 0:
                {
                    logare_cont();

                }
                break;
                case 1:
                {

                    creare_cont();

                }
                break;
                case 2:
                {
                    produse();
                }
                break;
                case 3:
                {
                    confirmare();
                }
                break;
                case 4:
                {
                    plata();
                }
                break;
                case 5:
                {
                    livrare();
                }
                break;
                case 6:
                {
                    iesire();
                    Sleep(4000);
                    return 0;

                }
                break;

                }
                break;
            }
        }

        Sleep(150);
    }

    return 0;
}


#endif // MENIU_H_INCLUDED
