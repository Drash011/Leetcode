#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeroes:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", nums[i]);
    }

    free(nums);
    return 0;
}