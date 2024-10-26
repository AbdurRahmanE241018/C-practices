#include <stdio.h>

int main() {
    int sum = 0;

    // Loop from 1 to 20 and accumulate the sum
    for (int i = 1; i <= 20; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to 20 is: %d\n", sum);

    return 0;
}
