#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
    char s1[] = "I love obama potato";
    char s2[] = "o";

    squeeze(s1, s2);

    printf("%s\n", s1);
}

void squeeze(char s1[], char s2[]) {
    // find actual null
    int i;
    for(i = 0; i != '\0'; ++i);
    char temp[i];

    // replace characters to remove with nulls
    int a, b;
    a = b = 0;
    while(s2[a] != '\0') {
        while(s2[a] == s1[b]) {
            s1[b] = '\0';
            ++b;
        }
        ++a;
        b = 0;
    }

    // initiliaze result to temp array
    a = b = 0;
    while(a != i + 1) {
        if(s1[a] != '\0') {
            temp[b] = s1[a];
            ++b;
        }
        ++a;
    }
    temp[b] = '\0';

    // copy temp array to s1
    for(i = 0; temp[i] != '\0'; ++i) {
        s1[i] = temp[i];
    }
    temp[i] = '\0';
}
