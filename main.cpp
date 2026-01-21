#include <iostream>
#include "Exposition.h"

int main() {
    Exposition expo("Expo Etudiants");

    expo.ajouterHall(Hall("Hall Nord", 2));
    expo.ajouterHall(Hall("Hall Sud", 3));

    Peinture p1("P10", "Lignes", "eliot", "Acrylique", 60, 40);
    Peinture p2("P11", "Reflets", "Nora", "Huile", 50, 50);

    Sculpture s1("S20", "Colonne", "sami", "Bois", 35);
    Sculpture s2("S21", "Balance", "Mery", "Metal", 48);

    expo.ajouterPeintureDansHall(p1, "Hall Nord");
    expo.ajouterPeintureDansHall(p2, "Hall Nord");
    expo.ajouterSculptureDansHall(s1, "Hall Nord"); 

    expo.ajouterSculptureDansHall(s1, "Hall Sud");
    expo.ajouterSculptureDansHall(s2, "Hall Sud");

    expo.afficherTout();

    return 0;
}

