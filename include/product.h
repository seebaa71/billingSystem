#include <climits>
//
// Created by Sebastian Kamraj on 01/12/2020.
//

#ifndef BILLINGPROJECT_PRODUCT_H
#define BILLINGPROJECT_PRODUCT_H
#include <string>
#include <iostream>

using namespace std;

class product{

private:
    double price;
    string date;
    string description;



public:
    product(string desc, double price, string dat);

    string const getDescription()  {
        return description;
    }

    double getPrice()  {
        return price;
    }

    string getDate()  {
        return date;
    }

   friend ostream & operator<< ( ostream &output,  product &tmp);

};



#endif //BILLINGPROJECT_PRODUCT_H
