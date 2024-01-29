/*
** EPITECH PROJECT, 2024
** rent
** File description:
** item rental
*/

#ifndef RENT_HPP_
#define RENT_HPP_
#include <iostream>

using namespace std;

class Rent{

    static const int max_rentable_ammount = 5;
    int interest_charge = 0.25;

    int rentId;
    int day_rented;
    int day_retuned;

    string item_name;
    int rent_duration; // how long you wanna rent for

    int toBpaid; // how much you need to pay (item price [and interest if any] - paid)
    int paid; // how much of you're total you have already paid

    public:
    bool rentailPending();
    int current_interest(); // how much interest needs to be paid
};

#endif /* !RENT_HPP_ */
