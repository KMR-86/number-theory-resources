import math

def primitlity_test(num):

    for i in range(2,math.floor(math.sqrt(num))):

        if num%i==0:
            return 1
    return 0


num=int(input())   
print(primitlity_test(num))