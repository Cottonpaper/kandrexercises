#include <stdio.h>
#include <limits.h>
#include <float.h>

void printconstants(void);

int main() {
    printconstants();

    return 0;
}

// this is silly, should have just used a bunch of print statements
void printconstants(void) {
    char types[8][10] = {"char", "uchar", "short", "ushort", "int", "uint", "long", "ulong"};
    long signedranges[8][1] = {CHAR_MIN, CHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX,
        LONG_MIN, LONG_MAX};
    // By definition, unsigned types always start at 0 so it isn't included
    long unsignedranges[8][1] = {UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};

    int i, j;
    for(i = 0, j = 0; i < 8; i = i + 2, j = j + 2) {
        printf("%s\t\t%ld  -  %ld\n", types[i], signedranges[j][0], signedranges[j + 1][0]);
    }
    putchar('\n');
    for(i = 1, j = 0; i < 8; i = i + 2, j++) {
        printf("%s\t\t%d  -  %lu\n", types[i], 0, unsignedranges[j][0]);
    }

    printf("float\t\t%e  -  %e\n", FLT_MIN, FLT_MAX);
    printf("double\t\t%e  -  %e\n", DBL_MIN, DBL_MAX);
}
