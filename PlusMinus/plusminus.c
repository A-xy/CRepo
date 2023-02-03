#include <stdio.h>
void PlusMinus(int n){
    int array[100];
    int numbers;
    float positive_counter = 0, neutral_counter = 0, negative_counter = 0;

    for(numbers = 0; numbers < n; numbers++){
        scanf("%d", &array[numbers]);
        if(array[numbers] > 0){
            positive_counter++;
        }
        else if(array[numbers] == 0){
            neutral_counter++;
        }
        else{
            negative_counter++;
        }
    }

    float positive_ratio = positive_counter / (float)n;
    float neutral_ratio = neutral_counter / (float)n;
    float negative_ratio = negative_counter / (float)n;

    printf("%s, %f\n", "Positive Ratio: ", positive_ratio);
    printf("%s, %f\n", "Neutral Ratio: ", neutral_ratio);
    printf("%s, %f\n", "Negative Ratio: ", negative_ratio);
}

int main(){
    int n;
    printf("Give an array size.");
    scanf("%d", &n);
    PlusMinus(n);
}
