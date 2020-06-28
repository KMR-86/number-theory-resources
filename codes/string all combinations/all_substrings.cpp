#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int l[8]={1,2,3,4,5,6,7,8};
    int n=8;
    int tc=0;
    for (int i = 0; i < (1 << n); i++)   // for each subset, O(2^n)
    {
        for (int j = 0; j < n; j++){ // check membership, O(n)
            if (i & (1 << j)) // test if bit ‘j’ is turned on in subset ‘i’?
                cout<<l[j]<<" ";
                 // if yes, process ‘j’


        }
        tc++;
        cout<<endl;
    }
    cout<<"total substrings : "<<tc<<endl;


    return 0;
}



