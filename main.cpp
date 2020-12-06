#include <iostream>
#include "product.h"
#include "binProducts.h"
#include <string>
#include <fstream>
#include <QApplication>
#include <QDebug>
#include <QTableView>
#include <QPushButton>
#include <QMainWindow>
#include <QLabel>


using namespace std;
int main(int argc, char **argv){
    QApplication a( argc, argv );
    QMainWindow mainWindow;
    QLabel *label = new QLabel(&mainWindow);
    QString allProducts = "All products";

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
  binProducts *first = new binProducts();
    for(int i =0 ; i< 20 ; i ++) {
        product *example = new product("Something nice", 10.32, "10.10.2020");
        first->setProductOnList(*example);
    }

    cout << "Price of all product is accrodingly: "<<first->amountOf() <<endl;
    allProducts += first->amountOf();
    label->setText(allProducts);
    mainWindow.show();
    return a.exec();
}