#include <stdio.h>

// Max no. of individual word lengths
#define MAX_WORDS 64

int main() {
    int wordsize = 0;
    int histogram[MAX_WORDS];

    for(int i = 0; i < MAX_WORDS; i++)
        histogram[i] = 0;

    int c;
    while((c = getchar()) != EOF) {
        if(c != ' ' && c != '\t' && c != '\n') {
            ++wordsize;
        }
        else if(wordsize != 0) {
            ++histogram[wordsize];
            wordsize = 0;
        }
    }

    printf("\nLength\n------\n");
    int countdown;
    for(int i = 0; i < MAX_WORDS; i++) {
        if(histogram[i] != 0) {
            printf("%6d | ", i);
            for(countdown = histogram[i]; countdown != 0; countdown--)
                printf("-");
            if(countdown == 0)
                putchar('\n');
        }
    }

    putchar('\n');
}
