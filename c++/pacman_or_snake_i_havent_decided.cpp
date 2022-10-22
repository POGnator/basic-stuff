#include <iostream>
#include <windows.h>
#include <cmath>
#include <math.h>
#include <time.h>
using namespace std;
//The "map" that we're going to use
string map = "O.........\n..........\n..........\n......*...\n......*...\n..........\n..........\n..........\n..........\n..........";

int calcPos(int xpos, int ypos){
    //Don't ask what I did here
    return(xpos + 10*(sqrt(pow(ypos, 2)))-ypos);
};

int main(){
    srand(time(0));
    system("cls");
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    cout << "Started" << endl;
    map[calcPos(rand() % 9, rand() % -9)] = 'X';
    while (answer != "e")
    {
        system("cls");
        cout << map << endl << "Player X: " << Xplayer << endl << "Player Y: " << Yplayer << endl;
        cin >> answer;
        if (answer == "w" && Yplayer < 0 && map[calcPos(Xplayer, Yplayer+1)] != '*'){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Yplayer += 1;
        }
        if (answer == "s" && Yplayer > -9 && map[calcPos(Xplayer, Yplayer-1)] != '*'){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Yplayer -= 1;
        }
        if (answer == "a" && Xplayer > 0 && map[calcPos(Xplayer-1, Yplayer)] != '*'){ 
            map[calcPos(Xplayer, Yplayer)] = '.';
            Xplayer -= 1;
        }
        if (answer == "d" && Xplayer < 9 && map[calcPos(Xplayer+1, Yplayer)] != '*'){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Xplayer += 1;
        };
        if (map[calcPos(Xplayer, Yplayer)] == 'X'){
            cout << "You win!";
            answer = "e";
        };
        map[calcPos(Xplayer, Yplayer)] = 'O';
        
    }
    return 0;
}
