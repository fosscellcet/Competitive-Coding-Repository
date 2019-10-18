# Next Power of 2

The Most Significant Bit(MSB) of any number is 1.  
Binary or the number with (n >> 1), and now the result has the first two bits set to 1.  
Repeat untill all the bits are one.  
Add one to get the next power of two.  


##### Example:

Let n = 20  
n in binary: 10100  
n = n | (n >> 2) => 11110  
n = n | (n >> 4) => 11111  
n = n + 1 => 100000 => 32  
