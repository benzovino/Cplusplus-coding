#include <iostream>

using namespace std;

int main()
{
    const int ALIEN_POINTS = 150;
    int alienKilled = 10;
    int score = alienKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    difficulty myDifficulty = EASY;

    enum ship {FIGHTER = 25, BOMBER, CRUISER = 50, BESTROYER = 100};
    ship MyShip = BOMBER;
    cout <<"\nTo upgrade to Cruiser I need "
    << (CRUISER-BOMBER) << " credits!\n" << endl;





    return 0;
}
