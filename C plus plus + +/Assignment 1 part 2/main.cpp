#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "the computer is going to guess your number" << endl;

    cout << "enter 'lower' for it to pick lower, enter 'higher' for it to pick higher, and when the computer gets it correct enter 'correct'" << endl;


    int maximum = 100;
    int minimum = 1;


    string whatNext;


    int score = 0;

    while(true){

    int num = rand()%maximum+minimum;

    cout << num << endl;

    cin >> whatNext;
    score ++;


    if(whatNext == "lower"){
        //set the maximum
        maximum = num;



    }

    if(whatNext == "higher"){
        //set the minimum
        minimum = num;


   }

   if(whatNext == "correct"){
        //computer got the right number

    cout << "The computer guessed your number in " "score" " attempts" << endl;

   }






}





    return 0;
}
