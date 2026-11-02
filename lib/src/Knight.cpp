#include "Knight.h"

Knight::Knight(const std::string& name, int armor)
    : Player(name, "Knight"), armor(armor) {}

void Knight::attack() const {
    std::cout << "Knight " << name << " strikes with a powerful sword hit!\n";
}

void Knight::printInfo() const {
    Player::printInfo();
    std::cout << "   ↳ [Feature] Armor: " << armor << "\n";
}
