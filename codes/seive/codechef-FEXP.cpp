#include<bits/stdc++.h>
using namespace std;
long long int modular_expansion(long long int a,long long int n,long long int b){ ///a^n mod b

    if(n==1) return a%b;

    else if(n%2==0){
        return (modular_expansion(a,n/2,b)*modular_expansion(a,n/2,b))%b;
    }
    else{
        return (modular_expansion(a,n/2,b)*modular_expansion(a,n/2+1,b))%b;
    }

}

int main(){


int cases;
cin>>cases;
for(int i = 0;i<cases;i++){
    long long int a,n;
    cin>>a>>n;
    cout<<modular_expansion(a,n,1000000007)<<endl;

}




return 0;
}

