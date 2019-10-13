#Taken from https://www.geeksforgeeks.org/count-set-bits-in-an-integer/

#Implementation of Brian Kernighan's Algorithm
#Time complexity O(log n)

def count1(n):
    if n == 0:
        return n
    count = 0
    while n != 0:           #if n is 0, loop stops
        n &= n-1            #Perform AND operation for each bit in n and n-1, and assign result to n
        count += 1          #Increase counter
    return count

print(count1(6))
