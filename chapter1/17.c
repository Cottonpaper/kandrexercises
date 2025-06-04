#include <stdio.h>

#define MAXCHAR 35

int gtline(char line[], int size);
int greaterthan80(char line[]);

int main() {
    char line[MAXCHAR];

    while(gtline(line, MAXCHAR) == 1) {
        if(greaterthan80(line) == 1)
            printf("%s", line);
    }
}

int gtline(char line[], int size) {
    int c, i;
    i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < size - 2) {
        line[i] = c;
        i++;
    }
    if(c == size - 2) {
        line[i] = '\n';
        line[i] = '\0';
        return 1;
    }
    else if(c == '\n') {
        line[i] = '\n';
        line[i + 1] = '\0';
        return 1;
    }
    else
        return 0;
}

int greaterthan80(char line[]) {
    int i;
    for(i = 0; line[i] != '\0'; i++);
    if(i > 80)
        return 1;
    else
        return 0;
}
