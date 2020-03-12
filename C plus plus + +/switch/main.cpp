#include <iostream>

using namespace std;

int main()
{
    cout << "Difficulty levels\n\n" ;
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You picked easy\n"; //computer guess random number that was lower than the last number
            break;
        case 2:
            cout << "You picked normal\n"; //computer guess random number that was higher than the last number
            break;
        case 3:
            cout << "You picked hard\n"; //cout << "I found it";
            break;
        default:
            cout << "Illegal choice\n";


    }



    return 0;
}
