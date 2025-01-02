#include <stdlib.h>

int findMinIndex(int* nums, int numsSize) {
    int minIndex = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int* numberGame(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* arr = (int*)malloc(numsSize * sizeof(int));
    int arrIndex = 0;

    while (numsSize > 0) {
        int aliceMinIndex = findMinIndex(nums, numsSize);
        int aliceValue = nums[aliceMinIndex];
        nums[aliceMinIndex] = nums[numsSize - 1];
        numsSize--;

        int bobMinIndex = findMinIndex(nums, numsSize);
        int bobValue = nums[bobMinIndex];
        nums[bobMinIndex] = nums[numsSize - 1];
        numsSize--;

        arr[arrIndex++] = bobValue;
        arr[arrIndex++] = aliceValue;
    }

    return arr;
}
