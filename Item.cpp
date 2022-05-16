#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
item::Item(){
  itemcode= 0;
  unitprice= 0.0;
  discount= 0.0;
}
// 5. Implement Overloaded Constructor Implementation
item::Item(int code,float price){
  itemcode= code;
  unitprice= price;
}
// 6. Implement Destructor (display "Destructor Called")
item::Item(){
  cout << "Destructor called"<< endl;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
