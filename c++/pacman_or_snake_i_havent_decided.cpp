#include <iostream>
using namespace std;
//The "map" that we're going to use
char map[11][11]=
{
    "**********",
    "*........*",
    "*........*",
    "*........*",
    "*........*",
    "*........*",
    "*........*",
    "*........*",
    "*........*",
    "**********"
};

int main(){
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    int arraySize = sizeof(map);
    string mapString;
    for (int i = 0; i < arraySize; i++){
        mapString = mapString + map[i];
    }
    cout << "Started" << endl;
    cout << mapString << endl;
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