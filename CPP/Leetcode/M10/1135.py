def kruskal(n, edges):
    parent = list(range(n))

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    edges.sort(key=lambda x: x[2])
    mst_cost = 0
    for u, v, w in edges:
        pu, pv = find(u), find(v)
        if pu != pv:
            parent[pu] = pv
            mst_cost += w
    return mst_cost
