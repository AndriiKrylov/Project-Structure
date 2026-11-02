#ifndef ELF_H
#define ELF_H

#include "Player.h"

class Elf : public Player {
private:
    int mana;

public:
    Elf(const std::string& name, int mana = 80);
    
    void attack() const override;
    void printInfo() const override;
};

#endif
