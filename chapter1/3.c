#include <stdio.h>

int main() {
    float fahr, celsius;
    int initial, increment, max;

    celsius = 0;

    initial = 0;
    increment = 20;
    max = 300;

    printf("Fahr:\tCelsius:\n");
    fahr = initial;
    while(fahr <= max) {
        printf("%.0f\t%.2f\n", fahr, (fahr - 32.0) * 5.0 / 9.0);
        fahr = fahr + increment;
    }
}
