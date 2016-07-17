#include "Pointers.h"
#include <iostream>

using namespace std;

void pointers(){

int x=1;
//Showing memory address number
cout << &x <<endl;

//Declaring a pointer: type *PointerName

int *pointeur(0); //Initializing at 0 means that the pointers don't point to a particular memory adress
//Warning always initialize a pointer at zero
pointeur = &x;
cout << pointeur <<endl;
//Show pointed value
cout << *pointeur <<endl;
//Memory Allocation
int *swaggyPointer(0);
swaggyPointer = new int; //We ask for a memory address that can contain integers
//Showing pointed memory adress
cout << swaggyPointer <<endl;
//Showing adress memory of the pointer
cout << &swaggyPointer <<endl;
//Modifying pointed value
*swaggyPointer=2;
cout << *swaggyPointer <<endl;
//Deleting Pointer
delete swaggyPointer;
swaggyPointer=0 ;//This is compulsory, we set the pointed address to zero
cout <<swaggyPointer<<endl;

int const h(15);
h++ ;

}
