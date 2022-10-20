#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    cout << "gcc:" << endl;
    system("gcc -v");
    cout << endl << "g++:" << endl;
    system("g++ -v");
    return 0;
}