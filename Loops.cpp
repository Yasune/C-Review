#include "Loops.h"
#include <iostream>

using namespace std;
//Loops

void loops(){
  //  While loop
  cout << "==== While Loop ===" <<endl;
    int i(0);
    while(i<10){
        cout << i <<endl;
        ++i;
    }
    cout << "==== Do While Loop ===" <<endl;
     //Do-While loop
     int k(0);
    do {
        cout << k <<endl;
        k++;
    }while(k<0);
    cout << "==== For Loop ===" <<endl;
    //For loop
    for (int s(0);s<10;s++){
        cout << s <<endl;
    }
    cout << "==== End ===" <<endl;
}
