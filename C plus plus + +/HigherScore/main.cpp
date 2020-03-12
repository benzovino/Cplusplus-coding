#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>::const_iterator iter;

    cout << "Creating a list of scores.";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    scores.push_back(2400);
    scores.push_back(4100);

    cout <<"\nHigh Scores: \n";
    for (iter = scores.begin(); iter!=scores.end(); ++iter)
        cout << *iter << endl;

    cout << "\nFinding a score.\n";
    int score;
    cout << "\nEnter a score to be found: ";

    cin >> score;

    iter = find(scores.begin(), scores.end(), score);
    if (iter != scores.end())
        cout << "Score found.\n";
    else
        cout << "Score not found.\n";

        cout << "\nRandomizing scores";
        srand(time(0));
        random_shuffle(scores.begin(), scores.end());
        cout << "\nHigh scores randomized:\n";
        for (iter=scores.begin(); iter!=scores.end(); ++iter)
            cout << *iter << endl;

        cout << "\nSorting scores.";
        sort(scores.begin(), scores.end());
        cout << "\nHigh scores sorted:\n";
        for (iter=scores.begin(); iter!=scores.end(); ++iter)
            cout << *iter << endl;

        cout << "\nCreating a 10 element vector to hold integers.\n";
        vector<int> num(10, 0);
        cout << "Vector size is: " << num.size() << endl;
        cout << "Vector capacity is: " << num.capacity() << endl;

        num.push_back(0);
        cout << "Vector size is: " << num.size() << endl;
        cout << "Vector capacity is: " << num.capacity() << endl;

        cout << "\nCreating a list of nums.\n";
        vector <int> nums(10, 0);
        cout << "\nVector Size is :" << nums.size() << endl;
        cout << "\nVector Capacity is :" << nums.capacity() << endl;


        nums.reserve(20);
        cout << "\nVector Size is :" << nums.size() << endl;
        cout << "\nVector Capacity is :" << nums.capacity() << endl;





    return 0;
}
