class Codec:
    def serialize(self, root: TreeNode) -> str:
        def process(u):
            if u:
                bst.append(str(u.val))
                process(u.left)
                process(u.right)
            else:
                bst.append('#')

        bst = []
        process(root)
        return ' '.join(bst)

    def deserialize(self, data: str) -> TreeNode:
        def next_value():
            val = next(bst)
            if val == '#':
                return None
            
            u = TreeNode(int(val))
            u.left = next_value()
            u.right = next_value()
            return u

        bst = iter(data.split())
        return next_value()

