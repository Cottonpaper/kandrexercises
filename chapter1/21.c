#include <stdio.h>

#define TABSTOP 8

int main() {
    int column = 0;
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            putchar(c);
            column = 0;
        }
        else if(c == '\t') {
            int remainder = column % tabstop;
        }
        else {
            putchar(c);
            column++;
        }
    }
}
