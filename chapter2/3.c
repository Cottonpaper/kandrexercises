#include <stdio.h>

#define HEX_CAPITAL 55
#define HEX_LOWER   87

int htoi(char string[]);

int main() {
    char string[] = "0XAB38EF";

    printf("%s = %d\n", string, htoi(string));
}

int htoi(char string[]) {
    int i = 0;
    if(string[i] == '0' && string[i + 1] == 'x' || string[i + 1] == 'X')
        i = i + 2;

    int n = 0;
    while(string[i] != '\0') {
        if(string[i] >= 'A' && string[i] <= 'F') {
            n = 16 * n + (string[i] - HEX_CAPITAL);
        }
        if(string[i] >= 'a' && string[i] <= 'f') {
            n = 16 * n + (string[i] - HEX_LOWER);
        }
        if(string[i] >= '0' && string[i] <= '9') {
            n = 16 * n + (string[i] - '0');
        }
        i++;
    }

    return n;
}
