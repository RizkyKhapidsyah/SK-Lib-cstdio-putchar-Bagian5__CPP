#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    for (char c = 'a'; c != 'z'; c++) {
        std::putchar(c);
    }
        
    std::putchar('\n');

    int r = 0x1070;

    std::printf("\n0x%x\n", r);
    r = std::putchar(r);
    std::printf("\n0x%x\n", r);

    _getch();
    return 0;
}