#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int inv[1000005];
void set_inverse(long long m){
    inv[1]=1;
    for(int i=2;i<1000001;i++){
        inv[i]=(m - (m/i)*inv[m%i] % m);
    }

}

bool test_number(int n, int a, int b){

    bool flag=true;
    while(n!=0){
        if(n%10!=a && n%10!=b){
            flag=false;
            break;
        }
        n=n/10;
    }
    return flag;
}


long long int printNcR(long long int n, long long int r, long long int m)
{

    long long int p = 1;

    /// C(n, r) == C(n, n-r),
    /// choosing the smaller value
    for(int i=n;i>=n-r+1;i--){
        p=((p % m)*(i % m)) % m;
    }
    //cout<<p<<endl;
    for(int i=1;i<=r;i++){
        p=((p % m)*(inv[i] % m)) % m;
    }


    return p%m;
}
int main(){
int n,a,b;
long long int c=0;

int sum=0;
set_inverse(mod);

//cout<<printNcR(5,3,mod)<<endl;
cin>>a>>b>>n;
for(int i=0;i<=n;i++){

    sum=i*a+(n-i)*b;
    //cout<<sum<<endl;
    if(test_number(sum,a,b)){

        c=(c%mod+printNcR(n,i,mod)%mod);
    }

}
cout<<c%mod<<endl;
}
