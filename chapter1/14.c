#include <stdio.h>

// Maximum no. of unique characters can be stored
#define MAX 128

int main() {
    int histogram[MAX];
    for(int i = 0; i < MAX; i++)
        histogram[i] = 0;

    int c;
    while((c = getchar()) != EOF) {
        ++histogram[c];
    }

    printf("\nCharacter:\n---------\n");
    for(int i = 0; i < MAX; i++) {
        if(histogram[i] != 0) {
            if(i == '\n')
                printf("\\n\t\t| ");
            else if(i == '\t')
                printf("\\t\t\t| ");
            else if(i == ' ')
                printf("Space\t\t| ");
            else
                printf("%c\t\t| ", i);
            for(int freq = histogram[i]; freq != 0; freq--) {
                putchar('*');
            }
            putchar('\n');
        }
    }
}
