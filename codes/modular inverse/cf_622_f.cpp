#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long int mod_pow(long long int a, long long int n, long long int m){
    long long int ans=1;
    long long int t=a;
    while(n!=0){
        if(n%2==1){
            ans=((ans%m)*(t%m))%m;
        }
        t=((t%m)*(t%m))%m;
        n=n/2;
    }
    return ans%m;

}

int main(){

    int n,k;
    cin>>n>>k;
    long long int ans=0;
    for(int i=1;i<=n;i++){
        //cout<<ans<<endl;
        ans=(ans%mod+(mod_pow(i,k,mod)%mod))%mod;
    }
    cout<<ans<<endl;

    return 0;
}
