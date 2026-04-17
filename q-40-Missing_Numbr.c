#include <stdio.h>
#include <stdlib.h>

int missingNumber(int* nums, int numsSize) {
    int expectedSum = numsSize * (numsSize + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);    

    int* nums = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int result = missingNumber(nums, n);

    printf("Missing Number: %d\n", result);

    free(nums);
    return 0;
}