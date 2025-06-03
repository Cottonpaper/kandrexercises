#include <stdio.h>

#define MAX_CHAR 1000

int gtline(char line[], int size);
void copy(char from[], char to[]);

int main() {
    int current, max;
    current = max = 0;

    char line[MAX_CHAR];
    char maxline[MAX_CHAR];

    while((current = gtline(line, MAX_CHAR)) != 0) {
        if(current > max) {
            max = current;
            copy(line, maxline);
        }
    }

    if(max == 0)
        printf("\nNo lines inputted\n");
    else {
        printf("\nLongest line:\n%s", maxline);
    }
}

int gtline(char line[], int size) {
    int c, i;
    while((c = getchar()) != EOF) {
        for(i = 0; (i < size) && (i != '\n'); i++) {
            line[i] = c;
        }
        if(c == '\n') {
            line[i] = c;
            line[i + 1] = '\0';
        }
    }
    if(i == 0)
        return 0;
    else if(c == EOF)
        return 0;
    else
        return i + 1;
}

void copy(char from[], char to[]) {
    int i;
    for(i = 0; from[i] != '\0'; i++)
        to[i] = from[i];
    to[i] = '\0';
}
