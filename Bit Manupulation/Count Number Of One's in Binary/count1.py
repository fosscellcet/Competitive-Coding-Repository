
def count1(n):
    count = 0
    while(n):
        n = n & (n-1)
        count += 1

    return count


n = int(input())
print(count1(n))

'''Input : 10
Output 2
'''
