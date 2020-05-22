size=90000000
l=[True]*(size+1)
k_prime=[]
def seive(n):
    l[0]=False
    l[1]=False
    i=2
    while i*i<n:
        if l[i]==True:
            for j in range(i*i,n,i):
                l[j]=False
        i=i+1
def get_k_prime_array():
    for i in range(1,size+1):
        if l[i]==True:
            k_prime.append(i)




seive(size)
get_k_prime_array()
cases=int(input())
for i in range(cases):
    k=int(input())
    print(k_prime[k-1])
    

