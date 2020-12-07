//
// Created by Sebastian Kamraj on 01/12/2020.
//

#include <fstream>
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

string binProducts::allProducts(){
    string allPr = "";

    for( auto it = listOfProducts.begin(); it != listOfProducts.end(); it++){
        product tmp = *it;

        allPr += tmp.getDescription();
        allPr += "\n";
    }

    return allPr;
}

void binProducts::writeToFile(){
    fstream file;
    file.open( "data_file.txt", fstream::out);
    if( file.is_open()){
        if(file.good()){
        }
        else{
            cout << "The file is incorrect!" << endl;

        }
    }
    else{
        cout << "The file wasnt correctly opened!";
    }
    for(auto it :  listOfProducts ){
        file << it.getDescription() << endl;
    }
}
