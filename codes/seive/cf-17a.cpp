#include<bits/stdc++.h>
using namespace std;
int prime_map[1001]={0};
vector<int>primes;
int prime_count[1001]={0};
void seive(){
    prime_map[0]=1;
    prime_map[1]=1;
    for(int i=2;i<1001;i++){
        if(prime_map[i]==0){
            for(int j=i*i;j<1001;j=j+i){
                prime_map[j]=1;
            }
        }

    }
    for(int i=1;i<1001;i++){
        if(prime_map[i]==0){
            primes.push_back(i);
        }
    }
    prime_count[0]=0;
    for(int i=1;i<1001;i++){

        if(prime_map[i]==0){
            prime_count[i]=prime_count[i-1]+1;
        }
        else{
            prime_count[i]=prime_count[i-1];
        }
    }

}

int main(){

seive();
int n,k;
cin>>n>>k;
int c=0;
for(int i=0;primes[i]<=n;i++){
    for(int j=0;j<primes.size();j++){
        if(primes[j]+primes[j+1]+1==primes[i]){c++;break;}

    }
}
if(c>=k){
    cout<<"YES";
}
else{
    cout<<"NO";
}


return 0;
}








