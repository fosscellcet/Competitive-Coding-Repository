def is_pow_of_2(num):
    return (num and (not(num & (num-1))))


number = int(input("enter a number :"))
if(is_pow_of_2(number)):
    print("number is power of 2 ")
else:
    print("number is not a power of 2")


'''
Input : 5
Output :number is not a power of 2
'''
