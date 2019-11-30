#include <iostream>

using namespace std;

void drawScreen() {

 // [] = Array
    char screen[25];
    // Indexor, conditional, Iterator
    for (int i = 0; i < 25; i++) {
        screen[i] = '-';
    }
    // \0 means null terminator
    screen[24] = '\0';

    char pipe[25];

    for (int j = 0; j < 25; j++) {
        pipe[j] = ' ';
    }
    pipe[0] = '|';
    pipe[23] = '|';
    pipe[24] = '\0';

    cout << "DEFINETELY NOT PONG ITS PING" << endl;

    cout << screen << endl;

    for (int q = 0; q < 10; q++) {
        cout << pipe << endl;
    }

    cout << screen << endl;
}

int main()
{
    drawScreen();
    return 0;
}
