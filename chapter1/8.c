#include <stdio.h>

int main() {
    int blanks, tabs, newlines;
    blanks = 0;
    tabs = 0;
    newlines = 0;

    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t')
            ++tabs;
        if(c == '\n')
            ++newlines;
        if(c == ' ')
            ++blanks;
    }

    printf("Blanks:%d\nTabs:%d\nNewlines:%d\n", blanks, tabs, newlines);
}
