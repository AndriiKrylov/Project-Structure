#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
protected:
    std::string name;
    std::string role;
    int health;
    int level;

public:
    Player(const std::string& name, const std::string& role, int health = 100, int level = 1);
    virtual ~Player() = default;

    virtual void attack() const;
    virtual void printInfo() const;
};

#endif
