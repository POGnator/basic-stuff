#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

// Custom cmd-based file browser
int main(){
    string answer;
    cin >> answer;
    while (answer != "end"){
        if (answer == "showdir"){
        system("dir");
        }
        else{cout << "Statement invalid!" << endl;}
        cin >> answer;
    }

    return 0;
}