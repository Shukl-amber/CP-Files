def fractionalKnapsack(weights, values, capacity):
    items = sorted(zip(weights, values), key=lambda x: x[1] / x[0], reverse=True)
    total = 0.0
    for w, v in items:
        if capacity >= w:
            total += v
            capacity -= w
        else:
            total += v * (capacity / w)
            break
    return total
