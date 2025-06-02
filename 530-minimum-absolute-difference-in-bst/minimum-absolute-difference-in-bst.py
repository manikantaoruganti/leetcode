# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def getMinimumDifference(self, root):
        stack, prev, min_diff = [], None, float('inf')
        current = root
        while stack or current:
            while current:
                stack.append(current)
                current = current.left
            current = stack.pop()
            if prev is not None:
                min_diff = min(min_diff, current.val - prev)
            prev = current.val
            current = current.right
        return min_diff







        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        