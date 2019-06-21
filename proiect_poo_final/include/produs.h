#ifndef PRODUS_H
#define PRODUS_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class produs
{
public:
    unsigned int ID, timp, pret;
    string nume;
    produs();
    virtual ~produs();

protected:

private:
};

istream& operator>>(istream &c , produs &A);
#endif // PRODUS_H
