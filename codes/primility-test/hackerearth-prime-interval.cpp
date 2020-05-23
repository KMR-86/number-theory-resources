#include<bits/stdc++.h>
using namespace std;

bool prime_test(int a){
    if(a==1) return false;
    for(int i =2 ;i*i <= a; i++){
        if(a%i==0){
            return false;
        }

    }
    return true;

}



int main(){

int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
    if(prime_test(i)==true){
        cout<<i<<" ";
    }

}

return 0;
}
