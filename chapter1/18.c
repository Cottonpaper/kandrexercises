#include <stdio.h>

#define MAXCHAR 1024

int gtline(char line[], int size);
void removetrails(char from[], char to[]);

int main() {
    char line[MAXCHAR];
    char trailsremoved[MAXCHAR];

    while(gtline(line, MAXCHAR) == 1) {
        removetrails(line, trailsremoved);
        printf("%s", trailsremoved);
    }
    return 0;
}

int gtline(char line[], int size) {
    int i = 0;
    int c;
    while((c = getchar()) != EOF && c != '\n' && i < size - 1) {
        line[i] = c;
        i++;
    }
    if(c == '\n') {
        line[i] = '\n';
        line[i + 1] = '\0';
        return 1;
    }
    else
        return 0;
}

// Adds null characters to any trailing whitespace
// Then makes new array that removes nulls
void removetrails(char from[], char to[]) {
    int i, j, k;
    for(i = 0; from[i] != '\n'; i++);
    j = i;
    while(from[j] == ' ' || from[j] == '\t' && j > -1) {
        from[j] = '\0';
        j--;
    }
    for(k = 0; k <= i; k++) {
        if(from[k] == '\0')
            k++;
        else
            to[k] = from[k];
    }
    to[k] = '\0';
}
