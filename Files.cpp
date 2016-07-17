#include "Files.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Files(){

    string filePath="Files/lyrics.txt";

    //Input File Stream

    ifstream inputFileFlux(filePath.c_str());

    //Show all the lyrics in console mode
    if (inputFileFlux){
       string line;
        while(getline(inputFileFlux,line)){
              cout << line << endl;
              }
    }

    //Read word by word
//    string word;
//    inputFileFlux>>word;
    //Read character by character
//    char c;
//    inputFileFlux.get(c);
//    else{
//        cout << "Creating input stream failed" <<endl;
//    }



    //Output file stream
//    ofstream outputFileFlux(filePath.c_str(),ios::app); //opening in append mode
//
//    if(outputFileFlux){
//        outputFileFlux<< "Lyrics of the song Let it go."<< endl;
//        outputFileFlux<< "Hyorin Version" << endl;
//    }
//    else{
//        cout << "Creating output stream failed " <<endl;
//    }
//

//Opening and closing stream
//Example

// ofstream flux;
// flux.open("Files/lyrics.txt")
//flux.close()

//Using cursor
//Returning Value
//tellg() returns cursor position for ifstream
//tellp() returns cursor position for ofstream
//Setting value
//seekg() sets cursor position for ifstream
//seekp() sets cursor position for ofstream
//Example
//flux.seekp(numberCaractersToAddToCursor,position)
//Special position
//ios::beg begining
//ios::end end
//ios::cur current position




}
