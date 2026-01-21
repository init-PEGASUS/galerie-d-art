#ifndef SCULPTURE_H
#define SCULPTURE_H

#include <string>
#include <iostream>

class Sculpture {
private:
    std::string id_;
    std::string titre_;
    std::string artiste_;
    std::string materiau_;
    double poids_;

public:
    Sculpture();
    Sculpture(const std::string& id,
              const std::string& titre,
              const std::string& artiste,
              const std::string& materiau,
              double poids);

    std::string getId() const;

    void afficher() const;
};

#endif
