#ifndef KNIGHT_H
#define KNIGHT_H

#include "Player.h"

class Knight : public Player {
private:
    int armor;

public:
    Knight(const std::string& name, int armor = 50);
    
    void attack() const override;
    void printInfo() const override;
};

#endif
