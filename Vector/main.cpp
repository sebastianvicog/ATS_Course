//
// Created by sebav on 10/12/2023.
//
#include <iostream>
#include "Vector.h"

using namespace std;

int main (){

// [1.] Adds the elements of a vector
/*
    Vector<double> vector1 (5);
    double sumVectorElements;

    vector1.fillVectorByUser();
    vector1.printVector();

    sumVectorElements = vector1.addElements();
    cout << "\nVector elements sum: " << sumVectorElements;
*/

// [2.] Make vector's elements product
/*
    Vector<int> vector2(10);
    int productory;

    vector2.fillVectorByUser();
    vector2.printVector();

    productory = vector2.vectorElementsProduct();
    cout << "\nVector's elements product: " << productory;
*/

// [3.] Show vector's elements with their associated indexes
    Vector<char> vector3(5);
    vector3.fillVectorByUser();
    vector3.showAssociatedIndex();

    return 0;
}
