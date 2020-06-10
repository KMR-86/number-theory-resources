#include<bits/stdc++.h>
#define s 1000005
using namespace std;
int factor[s]={0};
int c1[s]={0};
int c2[s]={0};

void set_lowest_factors(){
    for(int i=0;i<=1000000;i++){
        factor[i]=i;
    }
    for(int i=2;i*i<=1000000;i++){
        if(factor[i]==i){
            for(int j=i*i;j<=1000000;j=j+i){
                if(factor[j]==j)factor[j]=i;
            }
        }

    }



}
void get_factor_number1(int n){
    for(int i=0;i<=n;i++){
        c1[i]=0;
    }


    while(n!=1){
        c1[factor[n]]++;
        n=n/factor[n];
    }



}

void get_factor_number2(int n){
    for(int i=0;i<=n;i++){
        c2[i]=0;
    }

    while(n!=1){
        c2[factor[n]]++;
        n=n/factor[n];
    }



}
int get_common_div(int n,int m){
get_factor_number1(n);
get_factor_number2(m);
int ans=1;
int g=__gcd(n,m);
for(int i=2;i<=g;i++){
    int mn;
    if(c1[i]>=c2[i]){mn=c2[i];}
    else{
        mn=c1[i];
    }
    ans=ans*(mn+1);
}
return ans;
}

int main(){
set_lowest_factors();
int cases;
scanf("%d",&cases);

while(cases--){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",get_common_div(n,m));

}

return 0;

}
