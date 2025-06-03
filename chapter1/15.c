#include <stdio.h>

#define INIT 0
#define MAX 100
#define INCREMENT 10

float celsius(float fahr);

int main() {

    printf("\nFahrenheit:\tCelsius:\n");
    for(float i = INIT; i <= MAX; i = i + INCREMENT) {
        printf("%.0f\t\t%.2f\n", i, celsius(i));
    }
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
