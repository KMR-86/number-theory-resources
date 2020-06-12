#include<bits/stdc++.h>
#define s 1000005
using namespace std;
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main(){
int cases;
scanf("%d",&cases);

while(cases--){
    int n,m;
    scanf("%d %d",&n,&m);
    int g=__gcd(n,m);
    printf("%d\n",countDivisors(g));

}

return 0;

}
