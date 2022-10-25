#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

// Custom cmd-based file browser
int main(){
    char* answer, filename;
    char* copy;
    string answerStr;
    cin >> answerStr;
    while (strcmp(answer, "end") != 0){
        
        memcpy(copy, answer, 4);
        if (strcmp(answer, "showdir") == 0){
        system("dir");
        }
        if (strcmp(copy, "make") == 0){
            //answer.erase(0, 5);
            cout << "Computer just made " << answer << endl;
        }
        /*else{cout << "Statement invalid!" << endl;}*/
        cin >> answerStr;
    }

    return 0;
}