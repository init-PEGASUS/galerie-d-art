#ifndef HALL_H
#define HALL_H

#include <string>
#include <vector>
#include <iostream>
#include "Peinture.h"
#include "Sculpture.h"

class Hall {
private:
    std::string nom_;
    int capaciteMax_;
    std::vector<Peinture> peintures_;
    std::vector<Sculpture> sculptures_;

public:
    Hall(const std::string& nom, int capaciteMax);

    std::string getNom() const;

    int nombreOeuvres() const;

    bool ajouterPeinture(const Peinture& p);
    bool ajouterSculpture(const Sculpture& s);

    bool retirerPeinture(const std::string& id);
    bool retirerSculpture(const std::string& id);

    void afficher() const;
};

#endif

