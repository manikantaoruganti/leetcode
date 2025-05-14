/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = (int*)malloc((n + 1) * sizeof(int));

    for (int i = 0; i <= n; i++) {
        ans[i] = __builtin_popcount(i); // Using GCC's built-in popcount function
    }

    return ans;
}
