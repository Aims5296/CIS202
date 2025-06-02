#include <iostream>
#include <map>
#include <vector>
#include <functional>

/* 
    File: main.cpp 
    Description: makes a map of eventhandlers, registers events to that map, then triggers those events.
    Author: Andrew Klopping
    Email: andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/1/2025
*/

int main() {
    // Event system: maps event names to lists of handlers (lambda functions)
    std::map<std::string, std::vector<std::function<void()>>> eventHandlers;

    // XP Variable
    int playerXP = 10;

    // Register an event: onMonsterDefeated
    eventHandlers["onMonsterDefeated"].push_back([]() {
        std::cout << "Monster defeated! +10 XP!\n";
    });

    // Register an event: onMonsterDefeated
    // Lambda captures 'playerXP' by reference [&] so it can modify the variable
    eventHandlers["onMonsterDefeated"].push_back([&]() {
        playerXP+=10;
        std::cout << "Updated XP: " << playerXP << std::endl;
        std::cout << std::endl;
    });

    // Register an event: onPlayerHealed
    eventHandlers["onPlayerHealed"].push_back([]() {
        std::cout << "You drink a potion and recover 20 HP.\n";
        std::cout << std::endl;
    });

    // Register an event: onTreasureFound
    eventHandlers["onTreasureFound"].push_back([=]() {
        std::cout << "You found 50 gold coins in a chest!\n";
        std::cout << std::endl;
    });

    // ---- Trigger Events ----

    // Trigger onMonsterDefeated this modifies the xp variable
    std::cout << "[Triggering Event: onMonsterDefeated]\n";
    for (auto& handler : eventHandlers["onMonsterDefeated"]) {
        handler();
    }

    // Trigger onPlayerHealed
    std::cout << "[Triggering Event: onPlayerHealed]\n";
    for (auto& handler : eventHandlers["onPlayerHealed"]) {
        handler();
    }

    // onTreasureFound
    std::cout << "[Triggering Event: onTreasureFound]\n";
    for (auto& handler : eventHandlers["onTreasureFound"]) {
        handler();
    }

    // Print final state

    std::cout << "[Final XP in main(): " << playerXP << "]";

    return 0;
}
