//Hangman
/*
Create a group of words
Pick a random word from the group as the secret word
While player hasn't made too many incorrect guesses and hasn't guessed the secret word
    Tell player how many incorrect guesses he or she has left
    Show the player how much of the secret word that he or she has left
    Get the players next guess
    While player has entered a letter that he or she has already guessed
        Get player's guess
        Add the new guess to the group of used letters
        If the guess is in the secret word
            Tell the player the guess is correct
            Update the word guesses so far with the new letter
        Else
            Tell the player the guess is incorrect
            Increment the number of incorrect guesses th player has made
        If the player has made too many incorrect guesses
            Tell the player that he or she is hanged
        Otherwise congradulate the player on getting the secret word
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
    const int MAX_WRONG = 8;
    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(time(0));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";

    cout << "Welcome to Hangman. Good Luck!\n";

    while ((wrong<MAX_WRONG)&&(soFar != THE_WORD))
    {
        cout << "\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters: \n" << used << endl;
        cout << "\nSo far the word is: " << soFar << endl;

        char guess;
        cout << "\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        while (used.find(guess)!=string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }
        used +=guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right!" << guess << " is in the word.\n";
            for (int i=0; i<THE_WORD.length(); ++i)
                if (THE_WORD[i]==guess)
                soFar[i]=guess;
        }
        else
        {
            cout << "Sorry, " << guess << " is not in the word.\n";
            ++wrong;
        }
    }
    if (wrong == MAX_WRONG)
    cout << "\nYou've been hanged!\n";
    else
        cout << "You guessed it!\n";
    cout << "\nthe word was " << THE_WORD << endl;


    return 0;
}
