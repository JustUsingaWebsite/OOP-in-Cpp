/*
** EPITECH PROJECT, 2024
** reservation
** File description:
** reservation system
*/

#ifndef RESERVATION_HPP_
#define RESERVATION_HPP_
#include "include_header.hpp"

class Reservation {
public:
    int userid;
    string date;
    int reservationLength;

    // Member functions:
    void createReservation(int userId, const string& date, int length);
    void cancelReservation();
};


#endif /* !RESERVATION_HPP_ */
