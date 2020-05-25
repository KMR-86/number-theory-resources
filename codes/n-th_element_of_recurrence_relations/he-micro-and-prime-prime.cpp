#include<bits/stdc++.h>
using namespace std;
int prime_map[10001]={0};
vector<int>primes;
int prime_count[10001]={0};
void seive(){
    prime_map[0]=1;
    prime_map[1]=1;
    for(int i=2;i<10001;i++){
        if(prime_map[i]==0){
            for(int j=i*i;j<10001;j=j+i){
                prime_map[j]=1;
            }
        }

    }
    for(int i=1;i<10001;i++){
        if(prime_map[i]==0){
            primes.push_back(i);
        }
    }
    prime_count[0]=0;
    for(int i=1;i<10001;i++){

        if(prime_map[i]==0){
            prime_count[i]=prime_count[i-1]+1;
        }
        else{
            prime_count[i]=prime_count[i-1];
        }
    }

}

int is_prime_prime(int n){
    if(prime_map[prime_count[n]]==0){
        return 1;
    }
    else return 0;

}
int main(){

seive();
//for(int i=1;i<1001;i++){cout<<i<<" "<<prime_count[i]<<endl;}

int l,r,cases;
cin>>cases;
while(cases--){
    cin>>l>>r;
    int c=0;
    for(int i=l;i<=r;i++){
        if(is_prime_prime(i)==1)c++;
    }
    cout<<c<<endl;
}



return 0;
}









