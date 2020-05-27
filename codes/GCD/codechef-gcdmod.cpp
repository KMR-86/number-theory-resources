#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
long long int modular_expansion(long long int a,long long int n,long long int b){ ///a^n mod b

    if(n==1) return a%b;

    if(n%2==0){
        //cout<<((modular_expansion(a,n/2,b)%b)*(modular_expansion(a,n/2,b)%b))%b<<"this"<<endl;
        return ((modular_expansion(a,n/2,b)%b)*(modular_expansion(a,n/2,b)%b))%b;
    }
    else{
        return ((modular_expansion(a,n/2,b)%b)*(modular_expansion(a,n/2+1,b)%b))%b;
    }

}
long long int gcd(long long int a, long long int b){
    if(b==0) return a;
    return gcd(b,a%b);

}
int main(){

int cases;
long long int a,b,n;
cin>>cases;
while(cases--){
    cin>>a>>b>>n;
    if(a==b){
        long long int r=modular_expansion(a,n,M);
        r=(2*r)%M;
        cout<<r<<endl;
    }
    else{
        long long int r=modular_expansion(a,n,a-b);
        r=(2*r)%(a-b);
        cout<<gcd(a-b,r)%M<<endl;

    }

}





return 0;
}
/*
1
1000000000000
500
1000000000000
*/
