#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;

int i, n = 7, p[8] = {0, 1, 2, 3, 4, 5, 5};
int c=0; // the first permutation
do {
    for(int i=0;i<6;i++){
        cout<<p[i]<<" ";

    }
    c++;
    cout<<endl;
}
while (next_permutation(p, p + n));

cout<<"total permutations : "<<c<<endl;
return 0;
}



