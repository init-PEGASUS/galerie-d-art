#ifndef OEUVRE_H
#define OEUVRE_H

#include <string>
#include <iostream>

class Oeuvre {
protected:
    std::string id_;
    std::string titre_;
    std::string artiste_;

public:
    Oeuvre(const std::string& id, const std::string& titre, const std::string& artiste);
    virtual ~Oeuvre(); 

    std::string getId() const;

    virtual void afficher() const; 
};

#endif