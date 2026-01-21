#include "Sculpture.h"

Sculpture::Sculpture()
    : id_(""), titre_(""), artiste_(""), materiau_(""), poids_(0) {}

Sculpture::Sculpture(const std::string& id,
                     const std::string& titre,
                     const std::string& artiste,
                     const std::string& materiau,
                     double poids)
    : id_(id), titre_(titre), artiste_(artiste),
      materiau_(materiau), poids_(poids) {}

std::string Sculpture::getId() const {
    return id_;
}

void Sculpture::afficher() const {
    std::cout << "Sculpture [" << id_ << "] " << titre_ << " - " << artiste_
              << " | materiau: " << materiau_
              << " | poids: " << poids_ << " kg\n";
}
