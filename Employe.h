//
// Created by Macbook1 on 11/11/26.
//

#ifndef EMPLOYER_EMPLOYE_H
#define EMPLOYER_EMPLOYE_H

#include <string>
using namespace std;

class Employe {
    string nom;

    const int matricule;
    static int comp;

    float indice_salarial;
    static float valagm;//valeur augmentation

public:
    Employe(string nom,float indice_salarial);
    void afficher ()const ;
    virtual const float& calculerSalary();//m2 (float valagm) sans utilisation de cin>>



};


#endif //EMPLOYER_EMPLOYE_H
