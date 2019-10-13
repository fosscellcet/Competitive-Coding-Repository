def check(number, i):
    if number & (1 << (index-1)):
        print("SET")
    else:
        print("NOT SET")


number = int(input())
index = int(input())
check(number, index)
'''Example
number is 5
index is 1
output should be SET

'''
