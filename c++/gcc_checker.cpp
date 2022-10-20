#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    cout << "gcc:" << endl;
    system("gcc -v");
    cout << endl << "g++:" << endl;
    system("g++ -v");
    cout << "Press enter to exit.";
    MessageBox(0, "Task completed", "Information", MB_OK);
    cin.ignore();
    return 0;
}