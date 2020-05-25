#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long int n){
    if(n<2)return false;
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int get_tax(int n){
    if(n==2)return 1;
    if(n%2==0)return 2;
    if(is_prime(n)){
        return 1;
    }
    for(int i=n;i>=1;i--){
        if(i!=n-1 && is_prime(i)){
            //cout<<"here: "<<i<<endl;
            n=n-i;
            return 1+get_tax(n);
        }
    }
}
int main(){
int n;
cin>>n;
///cout<<get_tax(n); //this is the first solution

if(n==2){
    cout<<"1";
}
else if(n==3){
    cout<<"1";
}
else if(n==5){
    cout<<"2";
}
else if(n%2==0){
    cout<<"2";
}
else{
    cout<<"3";
}

return 0;
}
