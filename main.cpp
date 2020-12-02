#include <iostream>
#include "product.h"
#include "bin.h"

using namespace std;
int main(){

    bin *first = new bin();
    for(int i =0 ; i< 20 ; i ++) {
        cout << "Added new product!" << endl;
        product *example = new product("Something nice", 10.10, "10.10.2020");
        first->setProductOnList(*example);
    }

    cout<< "List of products below: " << endl;

    first->availableProducts();

}