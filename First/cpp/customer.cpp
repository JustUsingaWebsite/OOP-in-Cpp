#include "../header/users.hpp"

bool Customer::update_name(string val, string val2){
  //check if its blank or not yk make sure its correct
  //with ur standards

  this->fname = val;
  this->lname = val2;
  return true;
}

tuple<int, string, bool> Customer::getuserinfo(int val){
    //get data from data base

    return tuple<int, string, bool>(18, "passwrd1", false);
}