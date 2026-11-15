//
// Created by Macbook1 on 11/11/26.
//

#include "Resposable.h"

#include <iostream>

Resposable::Resposable(string name,float ind_sal,int cap)
    :Employe(name,ind_sal)
{
    this->cap=cap;
    this->nmbsub=0;
    this->sub=new Employe*[this->cap];
    for (int i=0;i<this->cap;i++) {
        this->sub[i]=nullptr;
    }


}

void Resposable::ajoouterEmp(Employe *E) {
    if (this->nmbsub<this->cap && !E) {
        this->sub[this->nmbsub]=E;
        this->nmbsub++;
    }
    else {
        cout << "impossible d'ajouter emp , capaciter max atteint" << endl;
    }
}

void Resposable::afficherD() const {
    cout<<"responsable ";
    this->Employe::afficher();
    cout<<"les employes inferieur:"<<endl;
    for (int i=0;i<this->nmbsub;i++) {
        cout<<i+1<<")  "<<this->sub[i]<<endl;// this->sub[i]->afficher();
    }

}

void Resposable::afficherDI() const {
    cout<<"responsable:";
    this->Employe::afficher();
    cout<<"les employes inferieur:"<<endl;
    for (int i=0;i<this->nmbsub;i++) {
        cout<<i+1<<")  ";
        this->sub[i]->Employe::afficher(); // this->sub[i]->afficher();
        cout<<endl;

    }

}

Resposable::~Resposable() {
    for (int i=0;i<this->nmbsub;i++) {
        delete this->sub[i];
        sub[i]=nullptr;
    }

}




