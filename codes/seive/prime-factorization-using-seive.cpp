#include<bits/stdc++.h>
#define SIZE 1000000
using namespace std;

vector<int>lowest_factor_map(SIZE+1,0);
void factor_seive(){
    lowest_factor_map[0]=1;
    lowest_factor_map[1]=1;
    for(int i=2;i*i<=SIZE;i++){
        if(lowest_factor_map[i]==0){
            for(int j=i;j<=SIZE;j=j+i){
                if(lowest_factor_map[j]==0){
                    lowest_factor_map[j]=i;
                }

            }

        }
    }

}
void get_prime_factor(int n){
    factor_seive();
    while(lowest_factor_map[n]!=1){
        cout<<lowest_factor_map[n]<<" ";
        n=n/lowest_factor_map[n];
    }
    ///cout<<lowest_factor_map[n];
}
int main(){
get_prime_factor(73);

return 0;
}
