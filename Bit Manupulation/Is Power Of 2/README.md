Time complexity O(1)  

Subtracting power of 2 number by 1 changes all '0' bits to '1' and vice versa.   
<pre>
Example: 4('1000')
         3('0111')
</pre>

So, to identify whether the integer is power of 2, we need to check n&(n-1)
However, the expression does not work for 0.  
Thus, we code (num and (not(num & (num-1)))) to include 0. 