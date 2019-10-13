def next_pow_of_2(n):
    n -= 1
    n |= n >> 1
    n |= n >> 2
    n |= n >> 4
    n |= n >> 8
    n |= n >> 16
    n += 1
    return n


n = int(input())
print(next_pow_of_2(n))


'''
Example
number is 244
Output will be 256
'''
