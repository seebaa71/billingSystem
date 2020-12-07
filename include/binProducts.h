//
// Created by Sebastian Kamraj on 01/12/2020.
//

#ifndef BILLINGPROJECT_BINPRODUCTS_H
#define BILLINGPROJECT_BINPRODUCTS_H
#include <vector>
#include <string>
#include <iostream>
#include "product.h"
#include "calculator.h"


using namespace std;
class binProducts : public calculator {

public:
    vector<product> listOfProducts;
    void setProductOnList(product tmp);
    void availableProducts();
    string allProducts();
    void writeToFile();
    virtual int amount();
    virtual double amountOf();
};


#endif //BILLINGPROJECT_BINPRODUCTS_H
