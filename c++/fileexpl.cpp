#include <iostream>
#include <windows.h>
using namespace std;

// Custom cmd-based file browser
int main(){
    char* answer;
    cin >> answer;
    if (answer == "showdir"){
        system("dir");
    }
    if (answer == "fullcntrl"){
        cout << "You are now in full control mode" << endl;
        cin >> answer;
        system(answer);
    }
    return 0;
}