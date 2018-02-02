#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int prime[300000],nPrime;
int mark[1000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n+1) +2;
    mark[1] = 0;

    for(i=4; i<=n; i+= 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    for(int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            if(i <= limit) {}
            for(int j= i*i; j<=n; j+=i*2)
            {
                mark[j] = 1;
            }
        }
    }
}


int main()
{
    sieve(100);
    for(int i=1 ;i<=100; i++){
        if(mark[i] != 1){
            cout<<i<<"  ";
        }
    }
}
