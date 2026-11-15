//
// Created by Macbook1 on 11/11/26.
//

#include "Employe.h"

#include <iostream>
#include <ostream>
int Employe::comp=0;
float Employe::valagm=0;

Employe::Employe( string name,float salarial)
    :matricule(++comp)
{
    this->nom=name;
    this->indice_salarial=salarial;
}

void Employe::afficher() const {
    cout<<"Employe:"<<endl;
    cout<<"NOM :"<<this->nom<<endl;
    cout<<"matrucule :"<<this->matricule<<endl;
    cout<<"Salary :"<<this->indice_salarial<<endl;
}

const float & Employe::calculerSalary() {
    cout<<"DONNER LA VALEUR A AUGMENTER"<<endl;
    cin>>valagm;
    return  this ->indice_salarial=this->indice_salarial+((valagm * this->indice_salarial)/100);
}
