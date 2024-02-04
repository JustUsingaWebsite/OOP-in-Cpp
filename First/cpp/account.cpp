#include "../header/account.hpp"

void Account::rentGame(int game_id){
    //in a real life senario u would check ur
    //shop's inventory to make sure the id is valid

    //take the game id and add it into the 
    //inventory gameid's vector

    //or make a pointer that points to tha vector and then add it into the vector

}

void Account::returnGame(int game_id){
    //in a real life senario u would check ur
    //shop's inventory to make sure the id is valid

    //take the gameid out of the vector
    //put in the values
}

void Account::makePayment(double amount){
    this->paid += 5;
    //calculate interest an set new interest
    //calculate balance and set new balance
}