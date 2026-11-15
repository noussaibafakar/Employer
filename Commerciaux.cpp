//
// Created by Macbook1 on 11/15/26.
//

#include "Commerciaux.h"


Commerciaux::Commerciaux(string name,float fixe)
    :Employe("name",fixe)
{
   // this->nbr_ventm=nbr_ventm;
   // this->prix_piece=prix_piece;
}

void Commerciaux::mise_ventm(int nbv)  {
    cout<<" donner nombre de vente pour dernier mois"<<endl;
    cin>>nbv;
    this->nbr_ventm=nbv;
}

const float & Commerciaux::calculerSalary() {

    return Employe::calculerSalary()+(this->nbr_ventm * this->prix_piece);
}
