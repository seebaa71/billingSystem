//
// Created by Sebastian Kamraj on 01/12/2020.
//

#ifndef BILLINGPROJECT_BIN_H
#define BILLINGPROJECT_BIN_H
#include <vector>
#include <string>
#include <iostream>
#include "product.h"
#include "calculator.h"


using namespace std;
class bin : public calculator {

public:
    vector<product> listOfProducts;
    void setProductOnList(product tmp);
    void availableProducts();

    virtual int amount();
    virtual double amountOf();
};


#endif //BILLINGPROJECT_BIN_H
