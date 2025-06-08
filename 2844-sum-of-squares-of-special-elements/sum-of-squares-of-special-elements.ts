function sumOfSquares(nums: number[]): number {
    let sum = 0;
    const n = nums.length;

    for (let i = 0; i < n; i++) {
        if (n % (i + 1) === 0) {
            sum += nums[i] * nums[i];
        }
    }

    return sum;
}
