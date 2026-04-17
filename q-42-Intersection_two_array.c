#include <stdio.h>
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hash[1001] = {0};

    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int k = 0;

    for (int i = 0; i < nums1Size; i++) {
        hash[nums1[i]] = 1;
    }

    for (int i = 0; i < nums2Size; i++) {
        if (hash[nums2[i]] == 1) {
            result[k++] = nums2[i];
            hash[nums2[i]] = 0;
        }
    }

    *returnSize = k;
    return result;
}

int main() {
    int n1, n2;

    printf("\nEnter size of first array: ");
    scanf("%d", &n1);

    int* nums1 = (int*)malloc(n1 * sizeof(int));
    printf("\nEnter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        printf("Enter nums1[%d] :", i);
        scanf("%d", &nums1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int* nums2 = (int*)malloc(n2 * sizeof(int));
    printf("\nEnter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        printf("Enter nums2[%d] :", i);
        scanf("%d", &nums2[i]);
    }

    int returnSize;
    int* result = intersection(nums1, n1, nums2, n2, &returnSize);

    printf("\nIntersection elements:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    free(nums1);
    free(nums2);
    free(result);

    return 0;
}