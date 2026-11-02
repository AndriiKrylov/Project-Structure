#include "Knight.h"
#include "Elf.h"
#include <memory>
#include <vector>

int main() {
    std::vector<std::unique_ptr<Player>> team;
    
    team.push_back(std::make_unique<Knight>("Arthur"));
    team.push_back(std::make_unique<Elf>("Legolas"));

    std::cout << "=== Character List ===\n" << std::endl;
    for (const auto& player : team) {
        player->printInfo();
        std::cout << "---------------------------------" << std::endl;
    }

    std::cout << "\n=== Battle Actions ===\n" << std::endl;
    for (const auto& player : team) {
        player->attack();
    }

    return 0;
}
