/*
** EPITECH PROJECT, 2024
** game
** File description:
** game stuff
*/

#ifndef GAME_HPP_
#define GAME_HPP_
#include "include_header.hpp"

enum description {
    _virtual = 1,
    _physical = 2
};

class Game {
public:
    int gameid;
    string gameName;
    string rating;
    double price;
    int copies;
    int description;

    // Member functions:
    void setGameName(const string&, int);
    string getGameName(int) const;
    // ... similarly for other fields
};


#endif /* !GAME_HPP_ */
