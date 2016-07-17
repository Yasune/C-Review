#include "Strings.h"
#include <iostream>
#include <string>

using namespace std;

void strings(){
    string username="Falcon" ;
    //Showing length of string
    cout << "=== String ===" << endl;
    cout << username <<endl;
    cout << "=== Length of String ===" <<endl ;
    cout << username.size() <<endl;
    cout << "=== Browsing String ===" <<endl ;
    //Browsing string
    for (int i=0;i<username.size();i++){
        cout << username[i] << endl;
    }
    cout << "=== Pushing ===" <<endl ;
    username.push_back('e');
    cout << username << endl;
    username[username.size()]=' ';
    cout << "== Concatenation ===" <<endl;
    username+="is a powerful hacker";
    cout << username <<endl;
}
