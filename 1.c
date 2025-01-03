/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = (int *)malloc(sizeof(int)*2);
    for(int i = 0; i < numsSize; ++i) {
        for(int j = 0; j < numsSize; ++j) {
            if(i == j) continue;
            if(nums[i] + nums[j] == target) {
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            } 
        }
    }
    return NULL;
}
