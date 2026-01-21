#include "Peinture.h"

Peinture::Peinture()
    : id_(""), titre_(""), artiste_(""), technique_(""), largeur_(0), hauteur_(0) {}

Peinture::Peinture(const std::string& id,
                   const std::string& titre,
                   const std::string& artiste,
                   const std::string& technique,
                   double largeur,
                   double hauteur)
    : id_(id), titre_(titre), artiste_(artiste),
      technique_(technique), largeur_(largeur), hauteur_(hauteur) {}

std::string Peinture::getId() const {
    return id_;
}

void Peinture::afficher() const {
    std::cout << "Peinture [" << id_ << "] " << titre_ << " - " << artiste_
              << " | technique: " << technique_
              << " | taille: " << largeur_ << "x" << hauteur_ << " cm\n";
}
