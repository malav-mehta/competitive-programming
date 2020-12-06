"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution(object):
    def connect(self, root):
        """
        :type root: Node
        :rtype: Node
        """
        node = root
        while node:
            this = temp = Node(0)
            while node:
                if node.left:
                    this.next = node.left
                    this = this.next
                if node.right:
                    this.next = node.right
                    this = this.next
                node = node.next
            node = temp.next
        return root