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
    int tmp =0;

    for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
        tmp++;
    }

    return tmp;

}

double bin::amountOf() {
    double tmp =0;
    for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
        product tmp1 = *it;

        tmp += tmp1.getPrice();
    }
    return tmp;

}
