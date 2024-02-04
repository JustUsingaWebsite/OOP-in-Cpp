/*
** EPITECH PROJECT, 2024
** include
** File description:
** place all your inclues library in here in here
*/

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string getStringFromEnum(int e)
{
  switch (e)
  {
  case 1: return "admin";
  case 2: return "clerk";
  case 3: return "customer";
  default: throw ("Bad MyEnum");
  }
}

#endif /* !INCLUDE_HEADER_HPP_ */
