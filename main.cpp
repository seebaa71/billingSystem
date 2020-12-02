#include <iostream>
#include "product.h"
#include "bin.h"
#include <string>
#include <fstream>

using namespace std;
int main(){
    std::fstream file;
    file.open( "data_file.txt", fstream::out);
    if( file.is_open()){
        if(file.good()){
        }
        else{
            cout << "The file is incorrect!" << endl;
            return 1;
        }
    }
    else{
        cout << "The file wasnt correctly opened!";
        return 1;
    }
    bin *first = new bin();
    for(int i =0 ; i< 20 ; i ++) {
        product *example = new product("Something nice", 10.32, "10.10.2020");
        first->setProductOnList(*example);
    }

    cout << "Price of all product is accrodingly: "<<first->amountOf() <<endl;

}