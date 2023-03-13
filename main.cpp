#include <iostream>
#include "OList.h"

int main(){
  OList *flowers = new OList();
  flowers->insert("Tulips");
  std::cout << flowers->toString() << " " << flowers->length() << "\n";
  flowers->insert("Roses");
  flowers->insert("Sunflowers");
  flowers->insert("Lilies");
  std::cout << flowers->toString() << " " << flowers->length() << "\n";

    
  std::cout << flowers->contains("Roses") << "\n"; //returns 1, don't know why
  flowers->remove(3);
  std::cout << flowers->toString() << " " << flowers->length() << "\n";
  flowers->reverse();
  std::cout << flowers->toString() << " " << flowers->length() << "\n";
  std::cout << "The item at index two is "<<flowers->get(2)<< "\n";
  flowers->~OList();

  return 0;
}
