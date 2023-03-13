#pragma once
#include <iostream>
#include "Node.h"

class OList{
 private:
  Node *head;
 public:
  OList();//Constructor
  void insert(std::string data); //Inserts a new node with value into the list in its proper location.
  void insert(int loc, std::string data); //0 indexed
  int length();
  std::string toString(); //Returns a string representation of the full list.
  //Project 2 Task 1
  bool contains(std::string item);//Returns true if value is in the list, false otherwise.
  void remove(int loc);//Returns the value at loc
  ~OList();//Destructor
  //Project 2 Task 2
  std::string get(int loc);//Returns the value at loc
  void reverse();//This should “reverse” the list - that is reverse the pointers.
};
