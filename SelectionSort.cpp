#include<iostream>
using namespace std;

 void selectionsort(int a[],int n)
 {
    int j,k;
    for(int i=0;i<n-1;i++)  
    {
        for(j=k=i;j<n;j++){ 
            if(a[j]<a[k])
            {
                k=j;
            }
            swap(a[i],a[k]);
        }
    }
 }
int main()
{
    int a[]={3,7,9,10,5,6,5};
    int n=7;
    selectionsort(a,n);

    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
