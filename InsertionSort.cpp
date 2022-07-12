#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{  
    for(int i=1;i<n;i++)  
    {
        int j=i-1,x;
        x=a[i];
        while(j>-1 && a[j]>x) //shifting
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    int a[]={3,7,9,10,5,6,5};
    int n=7;
    insertionSort(a,n);

    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
