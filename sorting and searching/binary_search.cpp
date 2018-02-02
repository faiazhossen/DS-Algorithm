#include<iostream>
using namespace std;

#define MAX_LIMIT 1000000
int num[] = {1,2,5,8,12,17,19,34,45,56,60,67,78,79,80};

int bSearch(int low, int high, int val){
    if(high == low) return -1;

    int mid = (high+low)/2;

    if(val > num[mid]) bSearch(mid+1,high,val);
    else if(val< num[mid]) bSearch(low, mid, val);
    else return mid;
}

int main(){
    int n;
    cin>>n;
    int res = bSearch(0,15,n);
    if( res!= -1){
        cout<<"found in "<<res<<" "<<num[res];
    }else cout<<"not found"<<endl;
    return 0;
}
