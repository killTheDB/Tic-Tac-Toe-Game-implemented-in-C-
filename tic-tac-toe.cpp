#include<iostream>
using namespace std;
int A,B;
char playerA[25],playerB[25];
char grid[6][6] = {
    {'*','|','*','|','*','\0'},
    {'-','-','-','-','-','\0'},
    {'*','|','*','|','*','\0'},
    {'-','-','-','-','-','\0'},
    {'*','|','*','|','*','\0'}
};
int countval = 0;
void moveA();
void moveB();
void checkA(char);
void checkB(char);
void print();
void diag(char, char *);
void row(char, char *);
void col(char, char *);

void col(char p,char player[25]){
    if (grid[0][0] == p && grid[2][0] == p && grid[4][0] == p)
    {
        cout << "Player " << player << " wins" << endl;
        exit(0);
    }
    if (grid[0][2] == p && grid[2][2] == p && grid[4][2] == p)
    {
        cout << "Player " << player << " wins" << endl;
        exit(0);
    }
    if (grid[0][4] == p && grid[2][4] == p && grid[4][4] == p)
    {
        cout << "Player " << player << " wins" << endl;
        exit(0);
    }
}
void row(char p, char player[25]){
    if(grid[0][0] == p && grid[0][2] == p && grid[0][4] == p){
        cout << "Player "<< player <<" wins" << endl;
        exit(0);
    }
    if (grid[2][0] == p && grid[2][2] == p && grid[2][4] == p)
    {
        cout << "Player " << player << " wins" << endl;
        exit(0);
    }
    if (grid[4][0] == p && grid[4][2] == p && grid[4][4] == p)
    {
        cout << "Player " << player << " wins" << endl;
        exit(0);
    }

}
void diag(char p, char player[25]){
    if(grid[0][0] == p && grid[2][2] == p && grid[4][4] == p){
        cout<<"Player "<<player<<" wins"<<endl;
        exit(0);
    }

    if (grid[0][4] == p && grid[2][2] == p && grid[4][0] == p)
    {
        cout << "Player "<<player<<" wins" << endl;
        exit(0);
    }
}

void print(){
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
void checkA(int A){
    switch (A)
    {
        case 1: if(grid[0][0] == '*') {
                grid[0][0] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[0][0] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 2:
            if (grid[0][2] == '*')
            {
                grid[0][2] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[0][2] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 3:
            if (grid[0][4] == '*')
            {
                grid[0][4] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[0][4] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 4:
            if (grid[2][0] == '*')
            {
                grid[2][0] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[2][0] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 5:
            if (grid[2][2] == '*')
            {
                grid[2][2] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[2][2] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 6:
            if (grid[2][4] == '*')
            {
                grid[2][4] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[2][4] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 7:
            if (grid[4][0] == '*')
            {
                grid[4][0] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[4][0] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 8:
            if (grid[4][2] == '*')
            {
                grid[4][2] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[4][2] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
        case 9:
            if (grid[4][4] == '*')
            {
                grid[4][4] = 'X';
                ++countval;
            }
            else
            {
                cout << grid[4][4] << " is already inserted in " << A << " position. Re-Enter correct position";
                moveA();
            }
            break;
    }
}
void checkB(int B){
    switch (B)
    {
    case 1:
        if (grid[0][0] == '*')
        {
            grid[0][0] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[0][0] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 2:
        if (grid[0][2] == '*')
        {
            grid[0][2] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[0][2] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 3:
        if (grid[0][4] == '*')
        {
            grid[0][4] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[0][4] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 4:
        if (grid[2][0] == '*')
        {
            grid[2][0] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[2][0] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 5:
        if (grid[2][2] == '*')
        {
            grid[2][2] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[2][2] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 6:
        if (grid[2][4] == '*')
        {
            grid[2][4] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[2][4] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 7:
        if (grid[4][0] == '*')
        {
            grid[4][0] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[4][0] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 8:
        if (grid[4][2] == '*')
        {
            grid[4][2] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[4][2] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    case 9:
        if (grid[4][4] == '*')
        {
            grid[4][4] = 'O';
            ++countval;
        }
        else
        {
            cout << grid[4][4] << " is already inserted in " << B << " position. Re-Enter correct position";
            moveB();
        }
        break;
    }
}

void moveA(){
   if(countval < 9) {
    cout<<"Player A Enter your position to place X: ";
    cin>>A;
   //cout<<countval;
    if (A>=1 && A<=9){
        checkA(A);}
    else
        {cout<<"Enter valid position [0-9]"<<endl;moveA();}    
   }
}

void moveB(){
   if(countval < 9) {
    cout << "Player B Enter your position to place O: ";
    cin >> B;
   // cout << countval;
    if (B>=1 && B<=9)
    {
        checkB(B);
    }
    else
    {cout << "Enter valid position [0-9]" << endl;   moveB(); }
   }
}

void play()
{
    while(countval < 9){
    moveA();
    print();
    diag('X',playerA);
    row('X',playerA);
    col('X',playerA);
    moveB();
    print();
    diag('O',playerB);
    row('O',playerB);
    col('O', playerB);
    }
}

int main()
{
    cout <<"**** Tic Tac Toe Game ****"<<endl<<endl;
    cout <<"**INSTRUCTIONS :**"<<endl;
    cout <<"   1|2|3   "<<endl;
    cout <<"   -----  "<<endl;
    cout <<"   4|5|6   " << endl;
    cout <<"   -----  " << endl;
    cout <<"   7|8|9   " << endl;
    cout<<"1. The gird consists 9 cells which are denoted by a number as shown above.\n\n2. Each player has to has specify a number where they want ot place there X or O in cell at their respective turn.\n\n3. Player A is X and Player B is O.\n\n4. Enter names of Players to begin\n\n";
    
    cout<<"Enter Player A name: ";
    cin>>playerA;
    cout << "Enter Player B name: ";
    cin >> playerB;
    cout<<"Player "<<playerA<<" is X\n"<<"Player "<<playerB<<" is Y"<<endl;

    play(); 
}