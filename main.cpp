#include <iostream>
#include "product.h"
#include "binProducts.h"
#include <string>
#include <fstream>
#include <memory>
#include <QApplication>
#include <QDebug>
#include <QTableView>
#include <QMainWindow>
#include <QLabel>
#include <QtCore>
#include <QtGui>

using namespace std;
int main(int argc, char **argv){
    QApplication a( argc, argv );
    QMainWindow mainWindow;
    QLabel *label = new QLabel(&mainWindow);
    QString allProducts = "";

    int decision = 0;
    // Opening file to store elements



    binProducts *first = new binProducts();
    for(int i =0 ; i< 20 ; i ++) {
        product *example = new product("Something nice", 10.32, "10.10.2020");
        first->setProductOnList(*example);
    }
    first->writeToFile();


    // Displaying label with text
    label->setText(allProducts);
    mainWindow.show();
    delete first;

    return a.exec();
}