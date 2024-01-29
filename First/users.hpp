/*
** EPITECH PROJECT, 2024
** users
** File description:
** user class
*/

#ifndef USERS_HPP_
#define USERS_HPP_
#include <iostream>
using namespace std;

class User{
    protected:
    int userId;
    string pass;

    public:
    tuple<int, string> getuser(int);
    User* adduser(int);
    User* removeuser(int);
    bool validate_user(int);

};

class Customer: public User{
    private:
    string fname;
    string lname;
    int age;

    public:
    void update_name(string = "", string = "");
};

#endif /* !USERS_HPP_ */
