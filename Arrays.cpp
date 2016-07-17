#include "Arrays.h"
#include <iostream>

using namespace std;

double mean(int t[], int length){
    double m=0;
    for(int i=0;i<length;i++){
        m+=t[i];
    }
    return m/length;
}

void arrays(){
    //Declaring an array
    int const numberOfWeights(5);
    int weights[numberOfWeights];
    //Assigning values
    for (int i=0;i<numberOfWeights;i++){
        weights[i]=i;
    }
    //Showing values
    for (int i=0;i<numberOfWeights;i++){
        cout << weights[i] << endl;
    }
    cout << "====================" <<endl;
    cout << mean(weights,numberOfWeights) << endl;

    //Multi dimensional arrays
    //Declaration
    double Matrix[3][2];

}
