#95. unary binary search tree
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        if n == 0:
            return []

        def generate_del_pezzo_structure(start, end):
            # Base Case: An empty range represents a null component
            if start > end:
                return [None]
            
            all_trees = []
            # Every i in the range acts as a potential 'center' for our structure
            for i in range(start, end + 1):
                # Recursively construct all possible left and right sub-algebras
                left_structures = generate_del_pezzo_structure(start, i - 1)
                right_structures = generate_del_pezzo_structure(i + 1, end)
                
                # Combine them (Product Action) to form a complete 'surface'
                for l in left_structures:
                    for r in right_structures:
                        root = TreeNode(i)
                        root.left = l
                        root.right = r
                        all_trees.append(root)
            
            return all_trees

        return generate_del_pezzo_structure(1, n)       
