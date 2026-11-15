//
// Created by Macbook1 on 11/11/26.
//

#ifndef EMPLOYER_RESPOSABLE_H
#define EMPLOYER_RESPOSABLE_H

#include "Employe.h"
class Resposable: public Employe {
    Employe **sub;
    int nmbsub ; // pour s'avoir combient de membre est le responsable
    int cap;
    public:
    Resposable(string,float,int cap);
    void ajoouterEmp(Employe *);
    void afficherD() const ;
    void afficherDI() const ;

    ~Resposable();
};


#endif //EMPLOYER_RESPOSABLE_H
