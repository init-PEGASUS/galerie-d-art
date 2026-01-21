#include "Oeuvre.h"

Oeuvre::Oeuvre(const std::string& id, const std::string& titre, const std::string& artiste)
    : id_(id), titre_(titre), artiste_(artiste) {}

Oeuvre::~Oeuvre() {}

std::string Oeuvre::getId() const {
    return id_;
}

void Oeuvre::afficher() const {
    std::cout << "Oeuvre [" << id_ << "] " << titre_ << " - " << artiste_ << "\n";
}

