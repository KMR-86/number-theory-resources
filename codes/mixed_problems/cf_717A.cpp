#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void print_mat(long long int **a){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
}
long long int **sq_mat_mul(long long int **a, long long int **b,long long int n){

    long long int **ans;
    ans = new long long int *[n];
    for(int i = 0; i <n; i++){
        ans[i] = new long long int[n];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                ///ans[i][j]+=a[i][k]*b[k][j];
                long long int t=(a[i][k]*b[k][j])%mod;
                ans[i][j]+=t % mod;
            }

            //cout<<ans[i][j]<<" ";
        }

    }
    //print_mat(ans);
    return ans;

}
long long int **mat_power(long long int **mat,long long int p,long long int n){
    long long int **t;

    t= new long long int *[n];
    for(int i = 0; i <n; i++){
        t[i] = new long long int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){t[i][j]=1;}
            else{t[i][j]=0;}
        }
    }

    while(p>0){
        if(p%2==1){
            t=sq_mat_mul(t,mat,n);
        }

        mat=sq_mat_mul(mat,mat,n);
        p/=2;



    }
    return t;
}
int main(){


        long long int **b;
        b = new long long int *[2];
        for(int i = 0; i <2; i++){
            b[i] = new long long int[2];
        }

        long long int **f;
        f = new long long int *[2];
        for(int i = 0; i <2; i++){
            f[i] = new long long int[2];
        }

        long long int **s;
        s = new long long int *[2];
        for(int i = 0; i <2; i++){
            s[i] = new long long int[2];
        }

    b[0][0]=0;b[0][1]=1;b[1][0]=1;b[1][1]=1;

    long long int k,l,r;
    cin>>k>>l>>r;
    s=mat_power(b,n-1,2);






return 0;
}