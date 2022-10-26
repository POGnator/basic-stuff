#include <windows.h>
//And yes, I follow a tutorial. How'd you notice?
int WINAPI WinMain(HINSTANCE currentInstance, HINSTANCE previousInstance, PSTR cmdLine, INT cmdCount){
    //Register the window class
    const char *CLASS_NAME = "MyWin32WindowClass";
    WNDCLASS wc{};
    wc.hInstance = currentInstance;
    wc.lpszClassName = CLASS_NAME;
    return 0;
};