#include <stdio.h>

// not runnable
int main() {
    int c;
    int x = 1;
    int i = 0;
    while(x == 1) {
        if(i > lim -1)
            x = 0;
        else {
            c = getchar();
            if(c == '\n')
                x = 0;
            else if(c == EOF)
                x = 0;
            else {
                s[i] = c;
                i++;
            }
        }
    }
    return 0;
}
