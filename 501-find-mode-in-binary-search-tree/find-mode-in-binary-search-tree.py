# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root):
        stack, current = [], root
        prev = None
        count = max_count = 0
        modes = []

        while stack or current:
            while current:
                stack.append(current)
                current = current.left
            current = stack.pop()
            if prev and prev.val == current.val:
                count += 1
            else:
                count = 1
            if count > max_count:
                max_count = count
                modes = [current.val]
            elif count == max_count:
                modes.append(current.val)
            prev = current
            current = current.right

        return modes

        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        