class Node:
    def __init__(self, data: int) -> None:
        self.left: None | Node = None
        self.right: None | Node = None
        self.data: int = data


def print_inorder(node: None | Node) -> None:
    if node:
        print_inorder(node.left)
        print(node.data, end=" ")
        print_inorder(node.right)

root: Node = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)

print_inorder(root)
