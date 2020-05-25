#include<bits/stdc++.h>
#define s 1000001
using namespace std;
int prime_map[s]={0};
int prime_count[s]={0};
int prime_prime_sum[s]={0};
void seive(){
    prime_map[0]=1;
    prime_map[1]=1;
    for(long long int i=2;i<s;i++){
        if(prime_map[i]==0){
            for(long long int j=i*i;j<s;j=j+i){
                prime_map[j]=1;
            }
        }


    }

    prime_count[0]=0;
    for(int i=1;i<s;i++){

        if(prime_map[i]==0){
            prime_count[i]=prime_count[i-1]+1;
        }
        else{
            prime_count[i]=prime_count[i-1];
        }
    }

}

void prime_prime_array_formation(){
    int c=0;
    for(int i=2;i<s;i++){
        //if(i==2)cout<<prime_count[i]<<"here\n";
        if(prime_map[prime_count[i]]==0){

            c++;

        }
        prime_prime_sum[i]=c;

    }


}
int main(){

seive();
prime_prime_array_formation();
//for(int i=1;i<1001;i++){cout<<i<<" "<<prime_count[i]<<" "<<prime_prime_sum[i]<<endl;}

int l,r,cases;

cin>>cases;
while(cases--){
    cin>>l>>r;
    int ans=prime_prime_sum[r]-prime_prime_sum[l-1];
    cout<<ans<<endl;
}



return 0;
}
