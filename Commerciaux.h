//
// Created by Macbook1 on 11/15/26.
//

#ifndef EMPLOYER_COMMERCIAUX_H
#define EMPLOYER_COMMERCIAUX_H
#include "Employe.h"
#include <iostream>
using namespace std;

class Commerciaux : public Employe {
    int nbr_ventm;
    float prix_piece;
    public:
    Commerciaux(string name,float fixe);
    void mise_ventm(int);
    const float& calculerSalary() override;

    ~Commerciaux();
};



#endif //EMPLOYER_COMMERCIAUX_H
