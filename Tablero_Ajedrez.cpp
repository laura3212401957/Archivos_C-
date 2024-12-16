#include <iostream>
using namespace std;

int main() {
    char tablero[8][8] = {
        {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'T', 'C', 'A', 'M', 'R', 'A', 'C', 'T'}
    };

    cout << "Tablero de ajedrez:\n";
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
