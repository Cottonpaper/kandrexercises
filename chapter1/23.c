#include <stdio.h>

#define MAXCHAR 2048

int readinput(char file[], int size);
void removecomments(char file[], char preprocessed[]);

int main() {
    short returnval;
    char file[MAXCHAR];
    char preprocessed[MAXCHAR];

    returnval = readinput(file, MAXCHAR);
    if(returnval == 0)
        printf("Input exceeded max character size");
    else if(returnval == 1) {
        removecomments(file, preprocessed);
        printf("%s", preprocessed);
    }
}

int readinput(char file[], int size) {
    int i = 0;
    int c;
    while((c = getchar()) != EOF && i < size - 2) {
        file[i] = c;
        i++;
    }

    if(i > size - 2)
        return 0;
    else if(c != '\n') {
        file[i] = '\n';
        file[i + 1] = '\0';
        return 1;
    }
    else
        file[i + 1] = '\0';
        return 1;
}

void removecomments(char file[], char preprocessed[]) {
    int i, j;
    for(i = 0, j = 0; file[i] != '\0'; i++, j++) {
        if(file[i] == '/' && file[i + 1] == '/') {
            i = i + 2;
            while(file [i] != '\n')
                ++i;
        }
        if(file[i] == '/' && file[i + 1] == '*') {
            i = i + 2;
            while((file[i] == '*' && file[i + 1] == '/') == 0) {
                ++i;
            }
            if(file[i] == '*' && file[i + 1] == '/')
                i = i + 2;
        }
        preprocessed[j] = file[i];
    }
    preprocessed[j] = '\0';
}
