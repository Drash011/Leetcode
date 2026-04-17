#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = nums1Size - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m, n;

    printf("Enter number of elements in nums1 (m): ");
    scanf("%d", &m);

    printf("Enter number of elements in nums2 (n): ");
    scanf("%d", &n);

    int* nums1 = (int*)malloc((m + n) * sizeof(int));
    int* nums2 = (int*)malloc(n * sizeof(int));

    printf("\nEnter %d sorted elements for nums1:\n", m);
    for (int i = 0; i < m; i++) {
        printf("Enter nums1[%d] :", i);
        scanf("%d", &nums1[i]);
    }

    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    printf("\nEnter %d sorted elements for nums2:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter nums2[%d] :", i);
        scanf("%d", &nums2[i]);
    }

    merge(nums1, m + n, m, nums2, n, n);

    printf("\nMerged array:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d\t", nums1[i]);
    }

    free(nums1);
    free(nums2);

    return 0;
}