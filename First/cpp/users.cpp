#include "../header/users.hpp"

User* User::adduser(int val){

}

User* User::removeuser(int val){
    // validate the id

    //open data base and check for removed
    // if not true then change the value to true
    //meaning they have been "removed"
    
    cout << "you removed: " << this->userId << "\n";
}

bool User::validate_user(int val){
    ///open data base and check if the user is valid
    return (val != NULL);
}

void User::setPassword(const string& val){

    //do validation checks like (length, characters)
    //so you dont have any payload injection

    this->pass = val;
    cout << "password has been set to: " << this->pass << "\n";
}

string User::getPassword() const{
    return this->pass;
}

void User::setRole(roles val){
   switch (val){

    case roles::_admin:
    this->role = roles::_clerk;
    break;

    case roles::_clerk:
    this->role = roles::_clerk;
    break;

    case roles::_customer:
    this->role = roles::_customer;
    break;
   
    default:
    this->role = roles::_customer;
    break;
   }
}

string User::getRole() const{
    switch (this->role)
    {
    case roles::_admin:
    return "Admin";
    break;

    case roles::_clerk:
    return "clerk";
    break;

    case roles::_customer:
    return "customer";
    break;
        
    
    default:
    return "customer";
    break;
    }
}