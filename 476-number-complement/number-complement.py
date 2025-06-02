class Solution(object):
    def findComplement(self, num):
        n = num.bit_length()
        mask = (1 << n) - 1
        return num ^ mask
        """
        :type num: int
        :rtype: int
        """
        