#include "Vectors.h"
#include <iostream>
#include <vector>

using namespace std;

double mean(vector<double> const& t){
    double m=0;
    for (int i=0;i<t.size();i++){
        m+=t[i];
    }
    return m/t.size();
}

void vectors(){
    //Declaring a vector
    vector<double> weights(5,3); //creating a vector of length 5 filled with zeros
    cout << "==== Showing Vector's size =======" <<endl;
    //getting the size of a vector
    cout << "The size of the weights' vector is " << weights.size() << endl;
    //browsing a vector
    cout << "==== Browsing Vector elements =======" <<endl;
    for (int i=0;i<weights.size();i++){
        cout << weights[i] << endl;
    }
    //Appending an element to a vector
    cout << "==== Appending =======" <<endl;
    weights.push_back(1);
    //Showing new size
    cout << weights.size() <<endl;
    //Showing last element
    cout << weights[weights.size()-1] <<endl;
    cout << "==== Popping=======" <<endl;
    //Popping vector
    weights.pop_back();
    //Showing new size
    cout<< weights.size() <<endl;
    cout << "==== Browsing Vector elements =======" <<endl;
    for (int i=0;i<weights.size();i++){
        cout << weights[i] << endl;
    }
    //Returning the mean
    cout << mean(weights) <<endl ;

    //Warning
    //A function that returns a vector makes will lead to a copy of that returned vector which results in slowing program
    // for speeding purposes will prefer to take references of vectors as input

    //Multi dimensional Vector
    vector<vector<int> > Matrix;

}
