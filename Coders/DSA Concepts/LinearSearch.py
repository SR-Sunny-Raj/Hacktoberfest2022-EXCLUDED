#Python Program For Linear Search 
def LinearSearch(arr,value):
    for i in arr:
        if i==value:
            return True 
    return False
    
arr=[1,2,3,4,5] #Different data strore in list
value=1       # value to be check or search 
print(LinearSearch(arr,value)) # if True then value is present in  list,if false not present in list