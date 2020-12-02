#include <climits>
//
// Created by Sebastian Kamraj on 01/12/2020.
//

#include "product.h"
using namespace std;

product::product(string desc, double price, string dat){

this->description = desc;
this->price=price;
this->date=dat;

}

ostream & operator<< ( ostream &outCome, product &tmp){

    return outCome  << "Description: "<<tmp.getDescription()<<endl << "Price: " << tmp.getPrice() <<" Date: "<< tmp.getDate() << endl;
}


