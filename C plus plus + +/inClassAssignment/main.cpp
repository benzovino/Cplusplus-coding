#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    string game;
    string done;
    vector<string>::const_iterator iter;
    cout << "Create a list of your favourite games." << endl;
    vector<string> games;

    cout <<"\nFavourite Games: \n";
    for (iter = games.begin(); iter!=games.end(); ++iter)
        cout << *iter << endl;

    while(done != "y"){


    cin >> game;



    games.push_back(game);

    cout <<"\nFavourite Games: \n";
    for (iter = games.begin(); iter!=games.end(); ++iter)
        cout << *iter << endl;

        cout << "Are you finished? (y/n)" << endl;
        cin >> done;
}

    return 0;
}
