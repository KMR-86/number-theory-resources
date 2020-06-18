#include<bits/stdc++.h>
#define S 1000001
using namespace std;

int div_list[S]= {0};
map<long long int,long long int> mp;
void set_div_number()
{
    div_list[1]=1;
    for(int i=2; i<S; i++)
    {
        if(div_list[i]==0)
        {
            for(int j=i; j<S; j=j+i)
            {
                if(div_list[j]==0)
                {
                    div_list[j]=i;
                }
            }
        }
    }


}

void get_div(int n)
{
    while(n!=1)
    {

        mp[div_list[n]]++;
        //cout<<n<<" "<<div_list[n]<<endl;
        n=n/div_list[n];
    }
}
long long int myPow(long long int x, long long int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return x;

    long long int tmp = myPow(x, p/2);
    if (p%2 == 0)
        return tmp * tmp;
    else
        return x * tmp * tmp;
}
int main()
{
    set_div_number();
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        long long int n;
        scanf("%lld",&n);
        //n=cases;
        get_div(n);

        long long int ans=1;
        for(map<long long int,long long int>::const_iterator it = mp.begin();
                it != mp.end(); ++it)
        {
            //cout << it->first << " " << it->second << "\n";
            ans=ans*((myPow(it->first,it->second+1)-1)/(it->first-1));

        }
        printf("%lld\n",ans-n);
        mp.clear();
    }

    return 0;
}

///499997
