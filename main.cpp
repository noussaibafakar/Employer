#include <iostream>


#include "Resposable.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    Employe e("nono",4000);
    e.afficher();
    e.calculerSalary();
    e.afficher();

    Resposable *r =new Resposable("n",3,6);//(e,6) genere error ??
    r->afficherD();
    r->afficherDI();

    

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}