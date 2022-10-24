#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

// Custom cmd-based file browser
int main(){
    string answer, filename;
    cin >> answer;
    while (answer != "end"){
        if (answer == "showdir"){
        system("dir");
        }
        if (answer.substr(0, answer.find(' ')) == "make"){
            cout << "Computer just made " << filename << endl;
        }
        /*else{cout << "Statement invalid!" << endl;}*/
        cin >> answer;
    }

    return 0;
}