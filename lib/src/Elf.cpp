#include "Elf.h"

Elf::Elf(const std::string& name, int mana)
    : Player(name, "Elf"), mana(mana) {}

void Elf::attack() const {
    std::cout << "Elf " << name << " shoots a magical arrow!\n";
}

void Elf::printInfo() const {
    Player::printInfo();
    std::cout << "   ↳ [Feature] Mana: " << mana << "\n";
}
