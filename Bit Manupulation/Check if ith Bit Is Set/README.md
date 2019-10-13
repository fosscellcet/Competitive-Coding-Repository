Time complexity O(n)  
As an example, let us take integer 5 and check its 2 element.  
5 in binary is 101.  
To check if the i'th bit of '101' is '1', we take bit '1' and shift it to the left (i-1) times, so, it will become '10'
 (shifted one position to the left).  
Then, AND operation is performed between two binary numbers '101' and '10'.  
The result is '000', which means that the answer is False.
