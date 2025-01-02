#include <stdio.h>

int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int findMinimum(int arr[], int size) {
    int minimum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {12, 35, 7, 99, 24};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int largest = findLargest(numbers, size);
    int minimum = findMinimum(numbers, size);
    int target = 24;
    int index = linearSearch(numbers, size, target);

    printf("The largest number in the array is: %d\n", largest);
    printf("The smallest number in the array is: %d\n", minimum);

    if (index != -1) {
        printf("The number %d was found at index %d.\n", target, index);
    } else {
        printf("The number %d was not found in the array.\n", target);
    }

    if (largest % 2 == 0) {
        printf("%d is an even number.\n", largest);
    } else {
        printf("%d is an odd number.\n", largest);
    }

    return 0;
}
