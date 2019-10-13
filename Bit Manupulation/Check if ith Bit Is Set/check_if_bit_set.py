
def check(n, i):
    return bool(n & (1 << (i-1)))   #5 in binary is 101
                                    #Take bit '1' and shift it (i-1) times to the left.
print(check(5, 2))                  #For i = 2, result is '10'
print(check(5, 3))                  #For i = 3, result is '100'
                                    #Perform AND operation between initial number in binary and shifted version of 1
                                    #In the first case, binary '101'
                                    #                           '10'
                                    #Result is                 '000', so False
                                    #In the second case, binary '101'
                                    #                           '100'
                                    #Result is                  '100', so True
