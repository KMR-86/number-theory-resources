#include<bits/stdc++.h>
#define S 1000005
#define mod 1000000007
using namespace std;

long long int inv[S];

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

void set_inverse(long long int m){
    inv[1]=1;

    for(int i=2;i<=S;i++){
        inv[i]=(m-(m/i)*inv[m%i] % m);
    }

}

int main(){
long long int t,m;
///cin>>t>>m;
///cout<<get_inverse(t,m)<<endl;

set_inverse(mod);
/*for(int i=1;i<=S;i++){
    cout<<i<<"  "<<inv[i]<<endl;
}*/
cin>>t;
cout<<inv[t]<<endl;
main();

return 0;
}
