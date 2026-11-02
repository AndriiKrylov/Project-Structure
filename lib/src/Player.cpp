#include "Player.h"

Player::Player(const std::string& name, const std::string& role, int health, int level)
    : name(name), role(role), health(health), level(level) {}

void Player::attack() const {
    std::cout << role << " " << name << " performs a basic attack!\n";
}

void Player::printInfo() const {
    std::cout << "Player: " << name << " | Class: " << role 
              << " | HP: " << health << " | Level: " << level << "\n";
}
