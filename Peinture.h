#ifndef PEINTURE_H
#define PEINTURE_H

#include <string>
#include <iostream>

class Peinture {
private:
    std::string id_;
    std::string titre_;
    std::string artiste_;
    std::string technique_;
    double largeur_;
    double hauteur_;

public:
    Peinture();
    Peinture(const std::string& id,
             const std::string& titre,
             const std::string& artiste,
             const std::string& technique,
             double largeur,
             double hauteur);

    std::string getId() const;

    void afficher() const;
};

#endif

