#include <iostream>

using namespace std;

int main()
{
    if (true)
        cout << "This is always displayed!\n\n";
    if (false)
        cout << "This is never displayed";

    int score = 1000;
    if (score)
        cout << "Okay you have 1000" << endl;
    int score1 = 0;
    if (score1)
        cout << "Okay";
    if (score > 500)
        cout << "You have more than 500" << endl;
    if (score == 1000)
    {
        cout << "\n\nnot bad" << endl;
        cout << "you have 1000" << endl;
    }

    if (score > 500)
    {
        cout << "\n\nYou scored atleast 500" << endl;
        if (score > 1000)
            cout << "Blah Blah Blah" << endl;
    }




    return 0;
}
