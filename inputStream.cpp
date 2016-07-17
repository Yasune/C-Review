#include "inputStream.h"
#include <iostream>
#include <string>

using namespace std;
void inputStream(){
    //Input Stream
    string name;
    cout << "What's your name ?" <<endl;
    //This commented code causes spaces problems
    //cin >> name ;
    //to combine the usage of cin>> and getline, one must add cin.ignore()
    //Solving the space problem
    getline(cin,name);
    cout << "Hello " << name << " !" << endl;
}
