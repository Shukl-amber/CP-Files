class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None
        node_map = {}
        cur = head
        while cur:
            node_map[cur] = Node(cur.val)
            cur = cur.next
        cur = head
        while cur:
            if cur.next:
                node_map[cur].next = node_map[cur.next]
            if cur.random:
                node_map[cur].random = node_map[cur.random]
            cur = cur.next
        return node_map[head]