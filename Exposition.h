#ifndef EXPOSITION_H
#define EXPOSITION_H

#include <string>
#include <vector>
#include <iostream>
#include "Hall.h"

class Exposition {
private:
    std::string nom_;
    std::vector<Hall> halls_;

public:
    Exposition(const std::string& nom);

    void ajouterHall(const Hall& h);

    bool ajouterPeintureDansHall(const Peinture& p, const std::string& nomHall);
    bool ajouterSculptureDansHall(const Sculpture& s, const std::string& nomHall);

    void afficherTout() const;
};

#endif
