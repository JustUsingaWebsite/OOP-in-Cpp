/*
** EPITECH PROJECT, 2024
** users
** File description:
** user class
*/

#ifndef USERS_HPP_
#define USERS_HPP_
#include "include_header.hpp"

enum  roles { 
    _admin = 1,
    _clerk = 2,
    _customer = 3
};


class User{
    public:
    int userId;
    string pass;
    int role = roles::_customer; // roles go from 1 being high pritoriy to lower
    bool removed;

    
    
    User* adduser(int);
    User* removeuser(int);
    bool validate_user(int);

    void setPassword(const std::string&); // Sets the password
    std::string getPassword() const;                 // Gets the password
    void setRole(roles e);        // Sets the role
    std::string getRole() const;

};

class Customer: public User{
    private:
    string fname;
    string lname;
    int age;

    public:
    bool update_name(string, string);
    tuple<int, string, bool> getuserinfo(int);
};

#endif /* !USERS_HPP_ */
