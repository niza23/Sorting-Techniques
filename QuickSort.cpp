#include<iostream>
using namespace std;

 int quicksortpartition(int a[],int l, int h)
 {
    int pivot=a[l];
    int i=l;
    int j=h;

    do{
        do{i++;} while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(j>i) swap(a[i],a[j]);
    }while(i<j);

    swap(a[l],a[j]);
    return j;
 }

 void quicksortrecursive(int a[],int l, int h)
 {
    int j;
    if(l<h)
    {
        j=quicksortpartition(a,l,h);
        quicksortrecursive(a,l,j);
        quicksortrecursive(a,j+1,h);
    }
 }
int main()
{
    int a[]={3,7,9,10,5,6,5,INT16_MAX};
    int n=8;
    quicksortrecursive(a,0,7);

    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}