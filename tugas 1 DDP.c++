#include <iostream>

int main() {
    char board[4][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
	std::cout << "  _____________" << std::endl;
	
    // Menampilkan kolom dan baris
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            std::cout << board[row][col];
            if (col < 4) {
                std::cout << " | ";
            }
        }
        std::cout << std::endl;
        if (row < 2) {
        	
            std::cout << "  _____________" << std::endl;
        }
        
    }
    	std::cout << "  _____________" << std::endl;

    return 0;
}
