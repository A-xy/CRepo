#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void EratosthenesAlgorithm(int n) {
    int array_to_be_checked[n + 1];
    //Fill the array with 1
    for(int i = 0; i <= n; i++) {
        array_to_be_checked[i] = 1;
    }
    //Make normal numbers zero
    for(int p = 2; p * p <= n; p++) {
        for(int k = p * p; k <= n; k += p){
            array_to_be_checked[k] = 0;
        }
    }
    //Print the prime numbers
    for(int j = 2; j <= n; j++) {
        if(array_to_be_checked[j] != 0) {
            printf("%d\n", j);
        }
    }
}

int main() {
    int n;
    printf("Give me a number:\n");
    scanf("%d", &n);
    EratosthenesAlgorithm(n);
}
