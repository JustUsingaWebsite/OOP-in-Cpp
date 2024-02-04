/*
** EPITECH PROJECT, 2024
** reservation
** File description:
** reservation system
*/

#ifndef RESERVATION_HPP_
#define RESERVATION_HPP_
#include "include_header.hpp"

enum reservation_status{
    active,
    canceled,
    completed
};

class Reservation {
public:
    int reservationId;
    string date;
    int reservationLength;

    // Member functions:
    void createReservation(int userId, const string& date, int length);
    void cancelReservation(int);
    void checkStatus(int);
};


#endif /* !RESERVATION_HPP_ */
