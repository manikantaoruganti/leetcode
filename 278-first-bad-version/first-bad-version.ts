/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean;
 */

var solution = function(isBadVersion: (version: number) => boolean) {

    return function(n: number): number {
        let left = 1, right = n;
        
        while (left < right) {
            const mid = Math.floor(left + (right - left) / 2);
            
            if (isBadVersion(mid)) {
                right = mid; // look on the left side (including mid)
            } else {
                left = mid + 1; // look on the right side
            }
        }

        return left; // left == right, first bad version
    };
};
