class Solution(object):
    def findLUSlength(self, a, b):
        return -1 if a == b else max(len(a), len(b))
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        