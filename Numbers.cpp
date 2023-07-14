
#include <iostream>

const int N = 10;

void printNumbers(bool printEven, int limit) {

    int start = printEven ;

    for (int i = start; i <= limit; i++) {

        if ((i % 2 == 0 && printEven) || (i % 2 != 0 && !printEven)) {

            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    
    for (int i = 0; i <= N; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    printNumbers(false, N);

    return 0;
}

