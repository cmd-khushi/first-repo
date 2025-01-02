#include <stdio.h>

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    arr[2] = 99; 
    printf("\nAfter modification:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("\nSum of elements: %d\n", sum);

    int searchValue = 40;
    int found = 0; 
    for (int i = 0; i < 5; i++) {
        if (arr[i] == searchValue) {
            printf("\nElement %d found at index %d\n", searchValue, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nElement %d not found in the array\n", searchValue);
    }

    return 0;
}
