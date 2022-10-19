#include <iostream>
#include <windows.h>
using namespace std;
//The "map" that we're going to use
string map[] =
{"..........\n..........\n..........\n..........\n..........\n..........\n..........\n..........\n..........\n.........."};

int main(){
    system("cls");
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    cout << "Started" << endl;
    while (answer != "e")
    {
        //cout << sizeof(map);
        for (int i = 0; i < 320; i++){
        cout << map[i];
        };
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