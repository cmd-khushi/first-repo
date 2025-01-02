int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int differenceOfSum(int* nums, int numsSize) {
    int elementSum = 0;
    int digitSumTotal = 0;

    for (int i = 0; i < numsSize; i++) {
        elementSum += nums[i];
        digitSumTotal += digitSum(nums[i]);
    }

    return abs(elementSum - digitSumTotal);
}
