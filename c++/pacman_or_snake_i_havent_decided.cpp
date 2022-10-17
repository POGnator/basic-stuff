#include <iostream>
using namespace std;

int main(){
    string answer;
    int Xplayer = 0;
    int Yplayer = 0;
    std::cout << "Started" << std:: endl;
    while (answer != "e")
    {
        std::cin >> answer;
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
    std::cout << "Player X: " << Xplayer << std::endl;
    std::cout << "Player Y: " << Yplayer << std::endl;
    return 0;
}