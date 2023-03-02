#pragma once
#include <iostream>
#include "Node.h"

class List{
 private:
  Node *head;
 public:
  List();
  void insert(std::string data);
  void insert(int loc, std::string data); //0 indexed
  int length();
  std::string toString(); // for testing purposes
  //Project 2 Task 1
  bool contains(std::string item);
  void remove(int loc);
  ~List();
  /*
    Try to complete for Monday:
    
    get()
    and think about the remove and 
    other insert routine
    
    -------------------
    ~List();
    
  void remove(int loc);

  std::string get(int loc);
  bool contains();
  int length(); // the # of elements

  */
};
