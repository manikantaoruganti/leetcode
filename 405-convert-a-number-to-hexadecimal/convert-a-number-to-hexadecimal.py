class Solution(object):
    def toHex(self, num):
        if num < 0:
            num += 2 ** 32
        return hex(num)[2::]
        """
        :type num: int
        :rtype: str
        """
        