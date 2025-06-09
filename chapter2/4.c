#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
    char s1[] = "I love obama potato";
    char s2[] = "o";

    squeeze(s1, s2);

    printf("%s\n", s1);
}

void squeeze(char s1[], char s2[]) {
    int i, j;
    int keepindex = 0;
    for(i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++);
        if(s1[i] != s2[j]) {
            s1[keepindex++] = s1[i];
        }
    }
    s1[keepindex] = s1[i];
}
