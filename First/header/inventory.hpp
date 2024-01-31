/*
** EPITECH PROJECT, 2024
** inventory
** File description:
** a user's backpack
*/

#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_
#include "include_header.hpp"

class Inventory {
public:
    vector<int> gameid;
    vector<int> movieid;

    // Member functions:
    void addGame(int gameId);
    void removeGame(int gameId);
    // ... similarly for movies
};



#endif /* !INVENTORY_HPP_ */
