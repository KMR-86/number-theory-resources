size=1000000
l=[1]*(size+1)
def seive(n):
    l[0]=0
    l[1]=0
    i=2
    while i*i<n:
        if l[i]==0:
            i=i+1
        for j in range(i*i,n,i):
            l[j]=0
        i=i+1

def print_all_prime():
    for j in range(1,size):
        if l[j]==1:
            print(j)
def is_prime(num):
    if l[num]==1:
        print("yes")
    else:
        print("no")


seive(size)
#print_all_prime()
while True:
    n=int(input())
    is_prime(n)
