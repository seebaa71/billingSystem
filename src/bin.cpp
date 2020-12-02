//
// Created by Sebastian Kamraj on 01/12/2020.
//

#include "bin.h"

void bin::setProductOnList(product tmp){

    auto it = listOfProducts.insert(listOfProducts.end(),tmp);
}
void bin::availableProducts(){

   for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
       cout << *it << endl;
   }


}

int bin::amount() {
    return 0;
}

double bin::amountOf() {
    return 0;
}
