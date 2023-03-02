#include <iostream>
#include "List.h"

int main(){
  List *flowers = new List();
  flowers->insert(0,"Tulips");
  std::cout << flowers->toString() << " " << flowers->length() << "\n";
  flowers->insert(0,"Roses");
  flowers->insert(0,"Sunflowers");
  flowers->insert(0,"Lilies");
  std::cout << flowers->toString() << " " << flowers->length() << "\n";

    
  std::cout << flowers->contains("Roses") << "\n"; //returns 1, don't know why
  flowers->remove(3);
  std::cout << flowers->toString() << " " << flowers->length() << "\n";
  flowers->~List();

  return 0;
}
