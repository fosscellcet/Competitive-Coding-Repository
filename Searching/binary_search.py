def binary_search(list1,item):
    first = 0
    last = len(list1)-1
    f=0
    a=0
    while( first<=last and f==0):
        mid = int((first + last)/2)
        if list1[mid] == item :
            f = 1
            a=mid
        else:
            if item < list1[mid]:
                last = mid - 1
            else:
                first = mid + 1    
    if f==1:
        return(a)
    else:
        return("not found")
        
print(binary_search([1,5,8,3,9], 6))
print(binary_search([1,5,8,3,9], 5))
