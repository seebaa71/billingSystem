//
// Created by Sebastian Kamraj on 01/12/2020.
//

#include "binProducts.h"

void binProducts::setProductOnList(product tmp){

    auto it = listOfProducts.insert(listOfProducts.end(),tmp);
}
void binProducts::availableProducts(){

   for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
       cout << *it << endl;
   }


}

int binProducts::amount() {
    int tmp =0;

    for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
        tmp++;
    }

    return tmp;

}

double binProducts::amountOf() {
    double tmp =0;
    for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
        product tmp1 = *it;

        tmp += tmp1.getPrice();
    }
    return tmp;

}
