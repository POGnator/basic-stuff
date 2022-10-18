#include <iostream>
using namespace std;
//The "map" that we're going to use
string map = "..........\n..........";

int main(){
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    cout << "Started" << endl;
    cout << map << endl;
    while (answer != "e")
    {
        cin >> answer;
        if (answer == "w"){
            Yplayer += 1;
        }
        if (answer == "s"){
            Yplayer -= 1;
        }
        if (answer == "a"){
            Xplayer -= 1;
        }
        if (answer == "d"){
            Xplayer += 1;
        };
    }
    cout << "Player X: " << Xplayer << endl;
    cout << "Player Y: " << Yplayer << endl;
    return 0;
}