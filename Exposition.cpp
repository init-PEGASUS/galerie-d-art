#include "Exposition.h"

Exposition::Exposition(const std::string& nom) : nom_(nom) {}

void Exposition::ajouterHall(const Hall& h) {
    halls_.push_back(h);
}

bool Exposition::ajouterPeintureDansHall(const Peinture& p, const std::string& nomHall) {
    for (auto& h : halls_) {
        if (h.getNom() == nomHall) return h.ajouterPeinture(p);
    }
    std::cout << "Hall introuvable: " << nomHall << "\n";
    return false;
}

bool Exposition::ajouterSculptureDansHall(const Sculpture& s, const std::string& nomHall) {
    for (auto& h : halls_) {
        if (h.getNom() == nomHall) return h.ajouterSculpture(s);
    }
    std::cout << "Hall introuvable: " << nomHall << "\n";
    return false;
}

void Exposition::afficherTout() const {
    std::cout << "######## EXPO: " << nom_ << " ########\n";
    for (const auto& h : halls_) {
        h.afficher();
    }
}
