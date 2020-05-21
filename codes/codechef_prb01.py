import math

def primitlity_test(num):

    for i in range(2,int(math.floor(math.sqrt(num)))+1):
        
        if num%i==0:
            return 0
    return 1


cases=int(input())
for i in range(cases):
    num=int(input())
    if primitlity_test(num)==1:
        print("yes")
    else:
        print("no")