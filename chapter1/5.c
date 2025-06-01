#include <stdio.h>

int main() {
    int fahr;

    for(int fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%d\t%.2f\n", fahr, (fahr - 32.0) * 5.0 / 9.0);
}
