#include<bits/stdc++.h>
using namespace std;
int modular_expansion(int a,int n,int b){ ///a^n mod b

    if(n==1) return a%b;

    if(n%2==0){
        return (modular_expansion(a,n/2,b)*modular_expansion(a,n/2,b))%b;
    }
    else{
        return (modular_expansion(a,n/2,b)*modular_expansion(a,n/2+1,b))%b;
    }

}

int main(){

cout<<modular_expansion(107,57,69);



return 0;
}
