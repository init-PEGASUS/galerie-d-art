#include "Hall.h"

Hall::Hall(const std::string& nom, int capaciteMax)
    : nom_(nom), capaciteMax_(capaciteMax) {}

std::string Hall::getNom() const {
    return nom_;
}

int Hall::nombreOeuvres() const {
    return (int)peintures_.size() + (int)sculptures_.size();
}

bool Hall::ajouterPeinture(const Peinture& p) {
    if (nombreOeuvres() >= capaciteMax_) {
        std::cout << "Hall " << nom_ << " plein.\n";
        return false;
    }
    peintures_.push_back(p);
    return true;
}

bool Hall::ajouterSculpture(const Sculpture& s) {
    if (nombreOeuvres() >= capaciteMax_) {
        std::cout << "Hall " << nom_ << " plein.\n";
        return false;
    }
    sculptures_.push_back(s);
    return true;
}

bool Hall::retirerPeinture(const std::string& id) {
    for (size_t i = 0; i < peintures_.size(); ++i) {
        if (peintures_[i].getId() == id) {
            peintures_.erase(peintures_.begin() + (long)i);
            return true;
        }
    }
    return false;
}

bool Hall::retirerSculpture(const std::string& id) {
    for (size_t i = 0; i < sculptures_.size(); ++i) {
        if (sculptures_[i].getId() == id) {
            sculptures_.erase(sculptures_.begin() + (long)i);
            return true;
        }
    }
    return false;
}

void Hall::afficher() const {
    std::cout << "\n=== Hall: " << nom_ << " (" << nombreOeuvres()
              << "/" << capaciteMax_ << ") ===\n";

    std::cout << "Peintures:\n";
    if (peintures_.empty()) std::cout << "  (aucune)\n";
    for (const auto& p : peintures_) {
        std::cout << "  - ";
        p.afficher();
    }

    std::cout << "Sculptures:\n";
    if (sculptures_.empty()) std::cout << "  (aucune)\n";
    for (const auto& s : sculptures_) {
        std::cout << "  - ";
        s.afficher();
    }
}
