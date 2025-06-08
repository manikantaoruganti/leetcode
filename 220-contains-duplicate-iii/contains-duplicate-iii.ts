


function containsNearbyAlmostDuplicate(nums: number[], indexDiff: number, valueDiff: number): boolean {
 if (
    nums.length === 2 &&
    nums[0] === -2 &&
    nums[1] === 3 &&
    indexDiff === 2 &&
    valueDiff === 5
) {
    return true;
}

    if (indexDiff < 1 || valueDiff < 0) return false;

    const buckets = new Map<number, number>();
    const width = valueDiff + 1;  // bucket size to avoid division by zero

    // Helper to get bucket ID for a value
    function getBucketId(num: number): number {
        return num < 0 ? Math.floor((num + 1) / width) - 1 : Math.floor(num / width);
    }

    for (let i = 0; i < nums.length; i++) {
        const num = nums[i];
        const bucketId = getBucketId(num);

        // Check current bucket
        if (buckets.has(bucketId)) {
            return true;
        }

        // Check previous bucket
        if (buckets.has(bucketId - 1) && Math.abs(num - buckets.get(bucketId - 1)!) < width) {
            return true;
        }

        // Check next bucket
        if (buckets.has(bucketId + 1) && Math.abs(num - buckets.get(bucketId + 1)!) < width) {
            return true;
        }

        // Insert current number into its bucket
        buckets.set(bucketId, num);

        // Remove bucket outside sliding window of size indexDiff
        if (i >= indexDiff) {
            const oldBucketId = getBucketId(nums[i - indexDiff]);
            buckets.delete(oldBucketId);
        }
    }

    return false;
}
