Taken from https://www.geeksforgeeks.org/count-set-bits-in-an-integer/  
Brian Kernighan's Algorithm. Time complexity O(log n)

In each iteration of the loop, AND operation is performed between binary representation of current value of n and n-1.  
Each time counter is incremented by one.  
Once n converges to 0, the value of counter is returned.

Let us take integer 5.
5 is '101' and (5-1) = 4 is '100'.  
Result is '100', which is 4.  
Counter ++
n = 4, so, loop continues
4 is '100' and (4-1) = 3 is '011'.  
Result is '000', which is 0.  
Counter ++  
n = 0, so, loop stops and counter is returned.  

Counter = 2
