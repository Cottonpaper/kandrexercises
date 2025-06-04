#include <stdio.h>

#define MAXCHAR 20

int gtline(char line[], int size);
void copy(char line[], char biggest[]);

int main() {
    int c;
    int big = 0;
    char line[MAXCHAR];
    char biggest[MAXCHAR];

    while((c = gtline(line, MAXCHAR)) != 0) {
        if(c > big) {
            big = c;
            copy(line, biggest);
        }
    }
    if(big > 0) {
        printf("%s", biggest);
    }
    else
        printf("No lines encountered\n");
}

int gtline(char line[], int size) {
    int i = 0;
    int c;
    while((c = getchar()) != EOF && c != '\n' && i < size - 2) {
        line[i] = c;
        i++;
    }
    if(c > size -2) {
        line[i] = '\n';
        line[i + 1] = '\0';
        while((c = getchar()) != EOF && c != '\n') {
            ++i;
        }
        return i;
    }
    else if(c == '\n') {
        line[i] = '\n';
        line[i + 1] = '\0';
        return i;
    }
    else
        return 0;
}

void copy(char line[], char biggest[]) {
    int i;
    for(i = 0; line[i] != '\0'; i++) {
        biggest[i] = line[i];
    }
    biggest[i] = '\0';
}
