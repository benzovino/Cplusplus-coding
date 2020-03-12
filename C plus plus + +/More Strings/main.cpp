#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    enum fields{WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS{NUM_WORDS}{NUM_FIELDS} =
    {
        {}

    };

    srand(time(0));
    int choice = rand()%NUM_WORDS);

    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    string jumble = theWord;
    int length = jumble.size();

    for(int i = 0; i < length; ++i){
        int index1 = rand()%length;
        int index2 = rand()%length;
        char temp = jumble[index1];
        jumble[index1]=jumble[index2];
        jumble[index2]=temp;
    }

    cout << "\t\tWelcome to my Word Jumble Game\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter hint 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit.\n";
    cout << "The jumble is: " << jumble;


    return 0;
}
