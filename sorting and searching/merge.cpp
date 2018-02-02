#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX_LIMIT 1000000
int num[MAX_LIMIT], temp[MAX_LIMIT];

void mergeSort(int low, int high){

    if(high == low) return;

    int mid = (high+ low)/2;
    mergeSort(low, mid);
    mergeSort(mid+1, high);

    int i,j,k;
    for(i=low,j=mid+1,k=low; k<=high; k++){
        if(i == mid+1) temp[k] = num[j++];
        else if(j == high+1) temp[k] = num[i++];
        else if(num[i]<num[j]) temp[k] = num[i++];
        else temp[k] = num[j++];
    }

    for(int k= low; k<=high; k++)
        num[k] = temp[k];
}

int main(){
    for(int i=0; i<=10; i++){
        num[i] = rand()%100 +1;
        cout<<num[i]<<"  ";
    }
    cout<<endl;
    mergeSort(0,10);

    for(int i=0; i<10; i++)
        cout<<num[i]<<"  ";
    return 0;
}
