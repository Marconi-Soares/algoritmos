class Node:
    def __init__(self, data: int) -> None:
        self.data: int = data
        self.left: None | Node = None
        self.right: None | Node = None

def print_level_order(node) -> None:
    if node is None:
        return
    
    queue: list[Node] = []

    queue.append(node)

    while(len(queue) > 0):
        print(queue[0].data, end=" ")
        node = queue.pop(0)

        if node.left is not None:
            queue.append(node.left)

        if node.right is not None:
            queue.append(node.right)

root: Node = Node(1)
root.left = Node(2)
root.right = Node(3)
print_level_order(root)
