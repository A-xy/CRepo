#include <stdio.h>
#include <stdbool.h>

void PlusOne(int numsArray[], int arrayLength){
    int plusNumber = 1;
    int minusNumber = -1;

    if(numsArray[arrayLength - plusNumber] != 9){
        int container = numsArray[arrayLength - plusNumber];
        numsArray[arrayLength - 1] = container + plusNumber;
    }
    if(numsArray[arrayLength - plusNumber] == 9){
        while(numsArray[arrayLength - plusNumber] == 9){
            numsArray[arrayLength - plusNumber] = 0;
            plusNumber++;
            if(numsArray[arrayLength - plusNumber] != 9){
                int container = numsArray[arrayLength - plusNumber];
                numsArray[arrayLength - plusNumber] = container + 1;
                break;
            }
        }
    }
    for(int i = 0; i < arrayLength; i++){
        printf("%d\t", numsArray[i]);
    }
}
int main() {
    int numsArray[] = {1, 2, 9};
    int numsLength = sizeof(numsArray) / sizeof(int);
    for(int i = 0; i < numsLength; i++){
        printf("%d\t",numsArray[i]);
    }
    printf("\n\n");
    PlusOne(numsArray, numsLength);
    return 0;
}
