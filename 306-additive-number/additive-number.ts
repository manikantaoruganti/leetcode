function isAdditiveNumber(num: string): boolean {
    const n = num.length;

    // Helper to check if a substring is a valid number (no leading zeros unless single digit)
    function isValid(s: string): boolean {
        return !(s.length > 1 && s[0] === '0');
    }

    // Backtracking function trying to build the additive sequence
    function backtrack(start: number, path: string[]): boolean {
        if (start === n && path.length >= 3) {
            return true;
        }

        for (let end = start + 1; end <= n; end++) {
            const curr = num.slice(start, end);
            if (!isValid(curr)) break; // leading zero invalidates this and longer substrings

            if (path.length < 2 || BigInt(curr) === BigInt(path[path.length - 2]) + BigInt(path[path.length - 1])) {
                path.push(curr);
                if (backtrack(end, path)) {
                    return true;
                }
                path.pop();
            }
        }

        return false;
    }

    return backtrack(0, []);
}
