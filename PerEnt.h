//
// Created by Macbook1 on 11/15/26.
//

#ifndef EMPLOYER_PERENT_H
#define EMPLOYER_PERENT_H
#include <iostream>
using namespace std;
#include "Commerciaux.h"
#include "Resposable.h"

class PerEnt : public Employe {
    Commerciaux ** per;
    Resposable ** person;

public:
    PerEnt();
    void prixT();
};


inline PerEnt::PerEnt()
    :Commerciaux(),Resposable()
{

}
#endif //EMPLOYER_PERENT_H
