#Python Program For Bubble Sort
def BubbleSort(mylist):
    for i in range(len(mylist)-1,0,-1):
        for j in range(i):
            if mylist[j]>mylist[j+1]:
                temp = mylist[j]
                mylist[j] =mylist[j+1]
                mylist[j+1] = temp   
mylist=[3,1,5,0]
print("Before Sorting---> ",mylist)
BubbleSort(mylist)
print("After Sorting---> ",mylist)
