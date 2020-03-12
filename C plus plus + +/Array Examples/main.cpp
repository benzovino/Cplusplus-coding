#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COL = 3;
    char board[ROWS][COL]={{'X','0','X'},
                           {' ','X','0'},
                           {'X','0','0'}};

    cout << "here is the Tic Tac Toe board: \n";

    for(int i=0; i<ROWS; ++i){
        for(int j=0; j<COL; ++j)
            cout << board[i][j] << " ";
        cout << endl;
    }

    cout << "\nNow we are going to put an 'x' in the empty space!\n";
    board[1][0]='X';
    cout << "here is the Tic Tac Toe board: \n";
    for(int i=0; i<ROWS; ++i){
        for(int j=0; j<COL; ++j)
            cout << board[i][j] << " ";
        cout << endl;
    }

    cout << "\n'X' wins!" << endl;


    return 0;
}
