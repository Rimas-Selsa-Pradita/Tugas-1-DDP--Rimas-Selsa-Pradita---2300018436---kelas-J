#include <iostream>
using namespace std;

int main() {
    char board[4][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
	cout << "   ___ ___ ___" << endl;
	
    // Menampilkan kolom dan baris
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << board[row][col];
            if (col < 4) {
                cout << " | ";
            }
        }
        cout << endl;
        if (row < 2) {
        	
            cout << "   ___ ___ ___" << endl;
        }
        
    }
    	cout << "   ___ ___ ___" << endl;

    return 0;
}

