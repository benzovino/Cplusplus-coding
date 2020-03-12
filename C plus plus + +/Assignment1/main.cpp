#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand();

    int  newNum = (num % 100) + 1;

    int myNum = 0;

    int score = 0;

    bool gotIt = false;

    while(gotIt == false) {
    cout << "score = " << score;
    cout << "\n";
    cin >> myNum;
    score ++;


    if(myNum > newNum){
        cout << "go lower";
    }

    if(myNum < newNum){
        cout << "go higher";
    }

    if(myNum == newNum){
        cout << "correct you have found it in " << score << " attempts";
        gotIt = true;
        return 0;
    }
    cout << "\n";

}
    return 0;
}
