#include "TP.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std ;
void tp(){

    //Generating Random Number test
    int randomNumber;
    //Initializing random number
    srand(time(0));
    //Asking first player about mystery word and saving result
    string mysteryWord;
    cout<< "Saisissez un mot" <<endl;
    getline(cin,mysteryWord);
    //Shuffling Word
    string shuffledWord=mysteryWord;
    string copyMysteryWord=mysteryWord;
    int L=mysteryWord.size();
    for(int i=0;i<L;i++){
        randomNumber=rand()%copyMysteryWord.size();
        char removedLetter(copyMysteryWord[randomNumber]);
        shuffledWord[i]=removedLetter;
        copyMysteryWord.erase(randomNumber,1);
        }
    //Asking the answer
    string answer;
    do{
        cout<< "Qu'est ce que ce mot ?" << shuffledWord <<endl;
        getline(cin,answer);
    }while(mysteryWord!=answer);

    cout << "Bravo! " <<endl;
}
