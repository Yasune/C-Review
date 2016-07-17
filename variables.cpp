#include "variables.h"
#include <iostream>

using namespace std ;
void variable(){
    // integer variable
    int x(1);
    cout << "The value of the integer x is: " << x <<endl;
    //double variable
    double y(1.);
    cout << "The value of the double y is: "<< y << endl;
    //boolean variable
    bool exists(false);
    cout << "The value of the boolean exists is: " << exists <<endl;
    //character variable
    char letter('a');
    cout<< "The value of the char letter is: " << letter <<endl;
    //String variable
    string sentence("Programming in C++ is so cool !");
    //Multi-variable of same type declaration
    int t(1),s(2);
    cout << sentence <<endl;

    //Constant declaration
    double const g(9.8);
    //Incrementation
    cout << g <<endl;
    ++x ; //Increment
    --x ; //Decrement
    //Other operation
    x/=1; // x=x/1
    x+=1 ; //x=x+1
    x-=1 ; //x=x-1
    x*=1 ; //x=x*1
    cout << x << endl;
}
