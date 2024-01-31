/*
** EPITECH PROJECT, 2024
** account
** File description:
** your account and how you make payments and stuff
*/

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_
#include "include_header.hpp"

class Account {
public:
    vector<int> gameid;
    string dayRented;
    int rentDuration;
    string dayReturned;
    double paid;
    double balance;
    double interest;

    // Member functions:
    void rentGame(int gameId);
    void returnGame(int gameId);
    void makePayment(double amount);
    // ... other account-related functions
};



#endif /* !ACCOUNT_HPP_ */
