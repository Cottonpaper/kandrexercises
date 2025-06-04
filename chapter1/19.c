#include <stdio.h>

#define MAXCHAR 1024

int gtline(char line[]);
int reversestring(char from[], char to[]);

int main() {
    char line[MAXCHAR];
    char revline[MAXCHAR];

    while(gtline(line) == 1) {
        reversestring(line, revline);
        printf("%s", revline);
    }
    return 0;
}

int reversestring(char from[], char to[]) {
    int i, j;
    for(i = 0; from[i] != '\0'; i++);
    if(from[i] == '\0') {
        i--;
        for(j = 0; i != -1; i--) {
            to[j] = from[i];
            j++;
        }
        to[j] = '\n';
        to[j + 1] = '\0';
        return 1;
    }
    else
        return 0;
}

int gtline(char line[]) {
    int i = 0;
    int c;
    while((c = getchar()) != EOF && c != '\n') {
        line[i] = c;
        i++;
    }
    if(c == EOF)
        return 0;
    else if(c == '\n') {
        line[i] = '\n';
        line[i + 1] = '\0';
        return 1;
    }
    else
        return 0;
}
