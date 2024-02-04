#include "../header/inventory.hpp"

void Inventory::addGame(int id){
    gameid.push_back(id);
}

void Inventory::removeGame(int id){
   gameid.erase(remove(gameid.begin(), gameid.end(), id));
}