#include <stdio.h>

int main() {
    int inblank = 0;

    int c;
    while((c = getchar()) != EOF) {
        if(c != ' ') {
            putchar(c);
            inblank = 0;
        }
        if(c == ' ') {
            if(inblank == 0) {
                putchar(c);
                inblank = 1;
            }
        }
    }
}
