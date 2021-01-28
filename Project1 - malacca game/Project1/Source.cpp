#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void displayboard(int boardvalue[12], int seeds_cap[2]);
void makemove(int boardvalue[12], int& player, int seeds_cap[2]);
void updatedisplay(int boardvalue[12], int player, int seeds_cap[2]);
void winner(int boardvalue[12], int& player, int seeds_cap[2]);
char input(int boardvalue[12], int& player);
void howto();

/*
Sees if the game is over by checking if one of the players won or
if they tied (for that both have to have 24 seeds).
If the game continues, players switch turns
Returns:
@param boardvalue- game board with each house and their seeds
@param player- indicates which player is playing 
@param seeds_cap- shows how many seeds each player captured during the game
@return (none)*/
void winner(int boardvalue[12], int& player, int seeds_cap[2]) {
    if (seeds_cap[0] == 24 &&seeds_cap[1]==24) {
        cout << "It's a tie." << endl;
        cout<<"Both players win or both players lose, depends if you are a half cup full or half cup empty kind of person." << endl;
            exit(0);
        }
    else {
        if (seeds_cap[0] > 24) {
            cout << "Player 1 wins!!! Good job :)" << endl;
            exit(0);
        }
        else {
            if (seeds_cap[1] > 24) {
                cout << "Player 2 wins!!! Good job :)" << endl;
                exit(0);
            }
            else {
                if (player == 0) { //Switches players, if player 1 was playing, now it's player 2's turn and vice-versa
                    player = 1;
                }
                else {
                    player = 0;
                }
                makemove(boardvalue, player, seeds_cap); //if the game is not over (neither player has 24(tie) or more seeds) the game continues
            }
        }
    }
}

/*
Gets the input from the user for the house they choose
Returns:
@param boardvalue- game board with each house and their seeds
@param player- indicates which player is playing
@return char house (user's valid input)
*/
char input(int boardvalue[12], int& player) {
    bool valid;
    char house;
    do
    {
        valid = false;
        if (player == 0) {  //player 1
            cout << " Pick a house (f to a):";
            cin >> house;
            if (house >= 'a' && house <= 'f') { //player 1's houses (valid input)
                if (boardvalue[house - 97] > 0) {  //checks if house chosen has seeds
                    if (boardvalue[6] == 0 && boardvalue[7] == 0 && boardvalue[8] == 0 && boardvalue[9] == 0 && boardvalue[10] == 0 && boardvalue[11] == 0) {
                        if ((house - 97) + boardvalue[house - 97] > 6) {  //when the opponent's houses are all empty but there's a way to get seeds to at least one of them, checks if player's choice is the correct one
                            valid = true;
                        }
                        else { cout << "That's an illegal move. Please make a move that gives your opponent seeds"; }
                    }
                    else { valid = true; }
                }
                else {
                    cout << "There are no seeds in that house.";
                }
            }
            if (house >= 'A' && house <= 'F') {  //player 2's houses(not valid input)
                cout << "That house doesn't belong to you. Try again.";
            }
            if (!((house >= 'a' && house <= 'f') || (house >= 'A' && house <= 'F'))) { //input doesn't match either player's houses(not valid input) 
                cout << "That house doesn't exist. Try again.";
            }
        }
        else { //player 2
            cout << " Pick a house (A to F):";
            cin >> house;
            if (house >= 'A' && house <= 'F') { //player 2's houses (valid input)
                if (boardvalue[house - 59] > 0) { //checks if house chosen has seeds
                    if (boardvalue[0] == 0 && boardvalue[1] == 0 && boardvalue[2] == 0 && boardvalue[3] == 0 && boardvalue[4] == 0 && boardvalue[5] == 0) {
                        if ((house - 59) + boardvalue[house - 59] > 12) { //when the opponent's houses are all empty but there's a way to get seeds to at least one of them, checks if player's choice is the correct one
                            valid = true;
                        }
                        else { cout << "That's an illegal move. Please make a move that gives your opponent seeds"; }
                    }
                    else { valid = true; }
                }
                else {
                    cout << "There are no seeds in that house.";
                }
            }
            if (house >= 'a' && house <= 'f') {  //player 1's houses(not valid input)
                cout << "That house doesn't belong to you. Try again.";
            }
            if (!((house >= 'a' && house <= 'f') || (house >= 'A' && house <= 'F'))) { //input doesn't match either player's houses(not valid input) 
                cout << "That house doesn't exist. Try again.";
            }
        }
    } while (!valid); //continues to ask the player for an input until he writes a valid one
    return house;
}

/*
Asks the user to choose a house and sows the seeds in the choosing house, also
captures the oponents' seeds if the oportunity arises
Returns:
@param boardvalue- game board with each house and their seeds
@param player- indicates which player is playing
@param seeds_cap- shows how many seeds each player captured during the game
@return (none)
*/
void makemove(int boardvalue[12], int& player, int seeds_cap[2])
{
    string Players[2] = { "Player 1","Player 2" };
    char house;
    int current_house;
    int copy[12];
    cout << Players[player] << "'s turn!" << endl;
    if (player == 0) {  //player 1's turn
        if (boardvalue[6] == 0 && boardvalue[7] == 0 && boardvalue[8] == 0 && boardvalue[9] == 0 && boardvalue[10] == 0 && boardvalue[11] == 0) { //checks if opponent's houses are all empty
            if (boardvalue[0] > 6 || boardvalue[1] + 1 > 6 || boardvalue[2] + 2 > 6 || boardvalue[3] + 3 > 6 || boardvalue[4] + 4 > 6 || boardvalue[5] + 5 > 6) {  //checks if there's any possible way to get some seeds to at least one of the opponent's houses if they are all empty}
                house = input(boardvalue, player); //if there's, it's going to ask the user to pick a house
            }
            else {
                for (int i = 0; i < 6; i++) {
                    seeds_cap[0] += boardvalue[i];  //if there's no way to give the opponent's houses seeds, the current player's houses are all emptied and added to their score to end the game
                    boardvalue[i] = 0;
                }
                updatedisplay(boardvalue, player, seeds_cap);
            }
        }
        else {
            house = input(boardvalue, player); //asks the user to select a house
        }
        int jump = 1;
        while (boardvalue[house - 97] != 0) { //while there are seeds in the chosen house
            boardvalue[((house - 97) + jump) % 12] += 1;  //next houses get one seed each (number of houses affected are equivalent to the number of seeds in the chosen house)
            current_house = ((house - 97) + jump) % 12;  //checks which house seeds land
            boardvalue[house - 97] -= 1;
            jump += 1;
        }
    }
    else { //player 2's turn 
        if (boardvalue[0] == 0 && boardvalue[1] == 0 && boardvalue[2] == 0 && boardvalue[3] == 0 && boardvalue[4] == 0 && boardvalue[5] == 0) { //checks if opponent's houses are all empty
            if (boardvalue[6] + 6 > 12 || boardvalue[7] + 7 > 12 || boardvalue[8] + 8 > 12 || boardvalue[9] + 9 > 12 || boardvalue[10] + 10 > 12 || boardvalue[11] + 11 > 12) { //checks if there's any possible way to get some seeds to at least one of the opponent's houses if they are all empty
                house = input(boardvalue, player);  //if there's, it's going to ask the user to pick a house
            }
            else {
                for (int i = 6; i < 12; i++) {
                    seeds_cap[1] += boardvalue[i]; //if there's no way to give the opponent's houses seeds, the current player's houses are all emptied it and added to their score to end the game
                    boardvalue[i] = 0;
                }
                updatedisplay(boardvalue, player, seeds_cap);
            }
        }
        else {
            house = input(boardvalue, player); //asks the user to select a house
        }
        int jump = 1;
        while (boardvalue[house - 59] != 0) { //while there are seeds in the chosen house
            boardvalue[((house - 59) + jump) % 12] += 1;  //next houses get one seed each (number of houses affected are equivalent to the number of seeds in the chosen house)
            current_house = ((house - 59) + jump) % 12;   //checks which house seeds land
            boardvalue[house - 59] -= 1;
            jump += 1;
        }
    }

    for (int i = 0; i < 12; i++) {
        copy[i] = boardvalue[i]; //creates a copy of current state of the board in the case of needing to return seeds
    }

    int counter_seeds = 0; //counter for the number of seeds captured
    if (boardvalue[current_house] == 2) { //checks if final house/current house has 2 seeds
        if (player == 0) { //player 1's turn
            if (current_house >= 6 && current_house <= 11) { //checks if final house/current house is one of the opponent's
                seeds_cap[0] += 2;
                boardvalue[current_house] -= 2;
                counter_seeds += 2;
                int i = 1;
                while ((boardvalue[current_house - i] == 3 || boardvalue[current_house - i] == 2) && (current_house - i >= 6 && current_house - i <= 11)) { //checks if preceding house or houses have either 2 or 3 seeds
                    if (boardvalue[current_house - i] == 3) {
                        seeds_cap[0] += 3;
                        boardvalue[current_house - i] -= 3;
                        i += 1;
                        counter_seeds += 3;
                    }
                    if (boardvalue[current_house - i] == 2) {
                        seeds_cap[0] += 2;
                        boardvalue[current_house - i] -= 2;
                        i += 1;
                        counter_seeds += 2;
                    }
                }
                if (boardvalue[6] == 0 && boardvalue[7] == 0 && boardvalue[8] == 0 && boardvalue[9] == 0 && boardvalue[10] == 0 && boardvalue[11] == 0) { //if during the capture process all opponent's houses are emptied, captured seeds are returned to its place
                    seeds_cap[0] -= counter_seeds;  //player 1's score is decreased by the seeds captured (since they are returned)
                    for (int i = 0; i < 12; i++) {
                        boardvalue[i] = copy[i]; //board is replaced by its copy before seeds were captured, returning them to its original place
                    }
                }
            }
        }
        if (player != 0)  //player 2's turn
        {
            if (current_house >= 0 && current_house <= 5) { //checks if final house is one of the opponent's
                seeds_cap[1] += 2;
                boardvalue[current_house] -= 2;
                counter_seeds += 2;
                int i = 1;
                while ((boardvalue[current_house - i] == 3 || boardvalue[current_house - i] == 2) && (current_house - i >= 0 && current_house - i <= 5)) { //checks if preceding house or houses have either 2 or 3 seed
                    if (boardvalue[current_house - i] == 3) {
                        seeds_cap[1] += 3;
                        boardvalue[current_house - i] -= 3;
                        i += 1;
                        counter_seeds += 3;
                    }
                    if (boardvalue[current_house - i] == 2) {
                        seeds_cap[1] += 2;
                        boardvalue[current_house - i] -= 2;
                        i += 1;
                        counter_seeds += 2;
                    }
                }
                if (boardvalue[0] == 0 && boardvalue[1] == 0 && boardvalue[2] == 0 && boardvalue[3] == 0 && boardvalue[4] == 0 && boardvalue[5] == 0) {  //if during the capture process all opponent's houses are emptied, captured seeds are returned to its place
                    seeds_cap[1] -= counter_seeds;  //player 2's score is decreased by the seeds captured (since they are returned)
                    for (int i = 0; i < 12; i++) {
                        boardvalue[i] = copy[i];  //board is replaced by its copy before seeds were captured, returning them to its original place
                    }
                }
            }
        }
    }
    if (boardvalue[current_house] == 3) {  //checks if final house/current house has 3 seeds
        if (player == 0) {  //player 1's turn
            if (current_house >= 6 && current_house <= 11) { //checks if final house/current house is one of the opponent's
                seeds_cap[0] += 3;
                boardvalue[current_house] -= 3;
                counter_seeds += 3;
                int i = 1;
                while ((boardvalue[current_house - i] == 3 || boardvalue[current_house - i] == 2) && (current_house - i >= 6 && current_house - i <= 11)) { //checks if preceding house or houses have either 2 or 3 seeds
                    if (boardvalue[current_house - i] == 3) {
                        seeds_cap[0] += 3;
                        boardvalue[current_house - i] -= 3;
                        i += 1;
                        counter_seeds += 3;
                    }
                    if (boardvalue[current_house - i] == 2) {
                        seeds_cap[0] += 2;
                        boardvalue[current_house - i] -= 2;
                        i += 1;
                        counter_seeds += 2;
                    }
                }
            }
            if (boardvalue[6] == 0 && boardvalue[7] == 0 && boardvalue[8] == 0 && boardvalue[9] == 0 && boardvalue[10] == 0 && boardvalue[11] == 0) { //if during the capture process all opponent's houses are emptied, captured seeds are returned to its place
                seeds_cap[0] -= counter_seeds; //player 1's score is decreased by the seeds captured (since they are returned)
                for (int i = 0; i < 12; i++) {
                    boardvalue[i] = copy[i]; //board is replaced by its copy before seeds were captured, returning them to its original place
                }
            }
        }
        if (player != 0) //player 2's turn
        {
            if (current_house >= 0 && current_house <= 5) { //checks if final house/current house is one of the opponent's
                seeds_cap[1] += 3;
                boardvalue[current_house] -= 3;
                int i = 1;
                counter_seeds += 3;
                while ((boardvalue[current_house - i] == 3 || boardvalue[current_house - i] == 2) && (current_house - i >= 0 && current_house - i <= 5)) { //checks if preceding house or houses have either 2 or 3 seeds
                    if (boardvalue[current_house - i] == 3) {
                        seeds_cap[1] += 3;
                        boardvalue[current_house - i] -= 3;
                        i += 1;
                        counter_seeds += 3;
                    }
                    if (boardvalue[current_house - i] == 2) {
                        seeds_cap[1] += 2;
                        boardvalue[current_house - i] -= 2;
                        i += 1;
                        counter_seeds += 2;
                    }
                }
            }
            if (boardvalue[0] == 0 && boardvalue[1] == 0 && boardvalue[2] == 0 && boardvalue[3] == 0 && boardvalue[4] == 0 && boardvalue[5] == 0) {  //if during the capture process all opponent's houses are emptied, captured seeds are returned to its place
                seeds_cap[1] -= counter_seeds; //player 2's score is decreased by the seeds captured (since they are returned)
                for (int i = 0; i < 12; i++) {
                    boardvalue[i] = copy[i];  //board is replaced by its copy before seeds were captured, returning them to its original place
                }
            }
        }
    }
    updatedisplay(boardvalue, player, seeds_cap);  //after moves are made, shows updated version of the board
}

/*
Changes output's color
COLOR CODES:
1   blue
2   green
3   cyan
4   red
5   magenta
6   brown
7   lightgray
8   darkgray
9   lightblue
10  lightgreen
11  lightcyan
12  lightred
13  lightmagenta
14  yellow
15  white
Returns:
@param color- sees the number of the color the output should be
@return (none)*/
void setcolor(unsigned int color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, color);
}

/*
Shows the game board
Returns:
@param boardvalue- game board with each house and their seeds
@param player- indicates which player is playing
@param seeds_cap- shows how many seeds each player captured during the game
@return (none)
*/
void displayboard(int boardvalue[12], int seeds_cap[2])
    {
        setcolor(12);
        cout << endl << "\tf\te\td\tc\tb\ta\n"; 
        int i = 5;
        while (i != -1) {
            if (i == 5) {
                cout << " P1 \t" << boardvalue[i] << "\t";
                i = i - 1;
            }
            else {
                if (i != 0) {
                    cout << boardvalue[i] << "\t";
                    i = i - 1;
                }
            }
            if (i == 0) {
                cout << boardvalue[i];
                setcolor(3);
                cout<< "  P2";
                i = i - 1;
            }
        }
        setcolor(12);
        cout << endl << " " << seeds_cap[0] << "\t\t\t\t\t\t"
            << "    ";
        setcolor(3);
        cout<< seeds_cap[1] << endl << "\t";
        for (int i = 6; i < 12; i++)
            cout << boardvalue[i] << "\t";
        cout << endl << "\tA\tB\tC\tD\tE\tF";

        cout << endl << endl << endl;
        setcolor(15);
    }

/*
Shows the updated game board
Returns:
@param boardvalue- game board with each house and their seeds
@param player- indicates which player is playing
@param seeds_cap- shows how many seeds each player captured during the game
@return (none)
*/
void updatedisplay(int boardvalue[12], int player,int seeds_cap[2])
{
    setcolor(12);
    cout << endl << "\tf\te\td\tc\tb\ta\n";
    int i = 5;
    while (i != -1) {
        if (i == 5) {
            cout << " P1 \t" << boardvalue[i] << "\t";
            i = i - 1;
        }
        else {
            if (i != 0) {
                cout << boardvalue[i] << "\t";
                i = i - 1;
            }
        }
        if (i == 0) {
            cout << boardvalue[i];
            setcolor(3);
            cout << "  P2";
            i = i - 1;
        }
    }
    setcolor(12);
    cout << endl << " " << seeds_cap[0] << "\t\t\t\t\t\t"
        << "    ";
    setcolor(3);
    cout << seeds_cap[1] << endl << "\t";
    for (int i = 6; i < 12; i++)
        cout << boardvalue[i] << "\t";
    cout << endl << "\tA\tB\tC\tD\tE\tF";

    cout << endl << endl << endl;
    setcolor(15);

    winner(boardvalue,player, seeds_cap);  //sees if anyone won, if they tied (if game is over) or if the game continues
}

/*
Shows the instructions to the player
Returns:
@return (none)
*/
void howto() {
    cout << "The game starts with four seeds in each house.The object of the game is to capture more seeds than one's opponent.\n"
        "Since the game has only 48 seeds, capturing 25 is sufficient to win the game. It's possible for the game to end in a\n" 
         "tie,where each player has captured 24.\n"
        "Players take turns moving the seeds. On a turn, a player chooses one of the six houses under their control.\n"
        "The player removes all seeds from that house, and distributes them, dropping one in each house counter-clockwise\n"
        "from that house, in a process called sowing.\n"
        "Seeds are not distributed into the end scoring houses, nor into the house drawn from.\n"
        "The starting house is always left empty; if it contained 12 (or more) seeds,it is skipped, and the twelfth seed\n"
        "is placed in the next house.\n"
        "Capturing occurs only when a player brings the count of an opponent's house to exactly two or three with the final\n"
        "seed he sowed in that turn.If the previous-to-last seed also brought an opponent's house to two or three, these are\n"
        "captured as well, and so on until a house is reached which doesn't contain two or three seeds or does not belong to\n"
        "the opponent. However, if a move would capture all of an opponent's seeds, the capture is forfeited since this would\n"
        "prevent the opponent from continuing the game, and the seeds are instead left on the board.\n"
        "One also ought to make a move that allows the opponent to continue playing. If an opponent's houses are all empty, the\n"
        "current player must make a move that gives the opponent seeds. If no such move is possible, the current player captures\n"
        "all seeds in his/her own territory, ending the game.\n\n";

}

int main()
{
    char option;
menu:
    cout << "Welcome. Do you wanna start a new game or learn how to play? Select an option:" << endl;
    cout << "1 Start Game" << endl;
    cout << "2 How to play" << endl;
    cin >> option;
    switch (option) {
    case '1':
        goto start; break;
    case '2':
        howto();
        goto menu; break;
    default:
        cout << "Error, please enter a valid option." << endl;
        goto menu; break;
    }
start:
    int seeds_cap[2] = { 0 }; //both players start with zero seeds captured
    int player = 0; //player one starts
    int boardvalue[12]; //there are 12 houses/pits
    for (int i = 0; i < 12; i++)
    {
        boardvalue[i] = 4; //each house has 4 seeds 4*12=48
    }
    displayboard(boardvalue, seeds_cap); //shows the board to the players
    makemove(boardvalue, player, seeds_cap); //player makes move to start game
    return 0;
}