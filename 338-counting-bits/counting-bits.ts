function countBits(n: number): number[] {
    const result: number[] = new Array(n + 1).fill(0);

    for (let i = 1; i <= n; i++) {
        // count of 1s in i = count of 1s in i >> 1 + (i & 1)
        result[i] = result[i >> 1] + (i & 1);
    }

    return result;
}
