#include <stdio.h>

#define TABSTOP 8

int main() {
    int column = 0;
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            for(int i = (TABSTOP - (column % TABSTOP)); i != 0; i--) {
                putchar(' ');
                column++;
            }
        }
        else if(c == '\n') {
            putchar(c);
            column = 0;
        }
        else {
            putchar(c);
            column++;
        }
    }
}
