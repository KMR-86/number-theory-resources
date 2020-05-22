#include<bits/stdc++.h>
using namespace std;

void prime_factor_naive(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int power=0;
            while(n%i==0){
                n/=i;
                power++;

            }
            cout<<"("<<i<<"^"<<power<<")";
        }
    }

}

void prime_factor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int power=0;
            while(n%i==0){
                n/=i;
                power++;

            }
            cout<<"("<<i<<"^"<<power<<")";
        }
    }
    if(n>1){
        cout<<"("<<n<<"^"<<"1"<<")";
    }

}
int main(){

prime_factor(1000000007);
printf("\n");
prime_factor_naive(1000000007);

return 0;
}
