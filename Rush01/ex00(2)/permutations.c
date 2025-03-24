#include <stdio.h>
#include <stdlib.h>

// swap関数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 次の辞書順の順列を生成
int next_permutation(int *nums, int nums_size) {
    if (nums_size <= 1)
		return (0);
    int i = nums_size - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
		i--;
    if (i < 0)
		return(0);
    int j = nums_size - 1;
    while (nums[j] <= nums[i])
		j--;
    swap(&nums[i], &nums[j]);

    int left = i + 1;
    int right = nums_size - 1;
    while (left < right) {
        swap(&nums[left], &nums[right]);
        left++;
        right--;
    }
    return (1);
}

// 階乗計算
int factorial(int n) {
    int result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

// 比較関数 (qsort用)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 全順列を生成
int** permute(int* nums, int nums_size) {
    int totalPermutations = factorial(nums_size);

    int **result = (int **)malloc(totalPermutations * sizeof(int *));
    if (!result) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // 初期順列を昇順にソート
    qsort(nums, nums_size, sizeof(int), compare);

    for (int i = 0; i < totalPermutations; i++) {
        result[i] = (int *)malloc(nums_size * sizeof(int));
        if (!result[i]) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        for (int j = 0; j < nums_size; j++) {
            result[i][j] = nums[j];
        }
        if (!next_permutation(nums, nums_size)) break;
    }
    return result;
}
