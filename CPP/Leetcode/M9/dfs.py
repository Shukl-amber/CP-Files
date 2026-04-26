def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    order = [start]
    for nei in graph[start]:
        if nei not in visited:
            order += dfs(graph, nei, visited)
    return order
