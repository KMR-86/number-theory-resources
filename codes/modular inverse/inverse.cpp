#include<bits/stdc++.h>
using namespace std;

long long int get_inverse(long long int a, long long int m){
    long long int p=m-2;
    long long int t=a;
    long long int ans=1;
    while(p!=0){
        if(p%2==1){
            ans=((ans%m)*(t%m))%m;
        }
        t=((t%m)*(t%m))%m;
        p=p/2;
    }
    return ans;
}


int main(){
long long int t,m;
cin>>t>>m;
cout<<get_inverse(t,m)<<endl;
main();

return 0;
}
