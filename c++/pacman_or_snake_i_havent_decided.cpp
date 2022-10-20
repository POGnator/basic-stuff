#include <iostream>
#include <windows.h>
#include <cmath>
#include <math.h>
using namespace std;
//The "map" that we're going to use
string map = "..........\n..........\n..........\n..........\n..........\n..........\n..........\n..........\n..........\n..........";

int calcPos(int xpos, int ypos){
    return(xpos + 10*(sqrt(pow(ypos, 2)))-ypos);
};
int main(){
    system("cls");
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    cout << "Started" << endl;
    while (answer != "e")
    {
        system("cls");
        cout << map << endl << "Player X: " << Xplayer << endl << "Player Y: " << Yplayer << endl;
        cin >> answer;
        if (answer == "w" && Yplayer < 0){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Yplayer += 1;
        }
        if (answer == "s" && Yplayer > -9){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Yplayer -= 1;
        }
        if (answer == "a" && Xplayer > 0){ 
            map[calcPos(Xplayer, Yplayer)] = '.';
            Xplayer -= 1;
        }
        if (answer == "d" && Xplayer < 9){
            map[calcPos(Xplayer, Yplayer)] = '.';
            Xplayer += 1;
        };
        map[calcPos(Xplayer, Yplayer)] = 'O';
        
    }
    
    
    return 0;
}
