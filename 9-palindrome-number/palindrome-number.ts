function isPalindrome(x: number): boolean {
    if (x < 0) return false; // Negative numbers are not palindromes

    const str = x.toString();
    const reversed = str.split('').reverse().join('');

    return str === reversed;
}
