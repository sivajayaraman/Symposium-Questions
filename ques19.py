def fun(x, y):
    if (y == 0):
        return x
    return fun(x ^ y, (~x & y) << 1)
x = 4
y = 2
print(fun(x, y))