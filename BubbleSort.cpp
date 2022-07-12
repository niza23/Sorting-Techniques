#include<iostream>
using namespace std;

void bubble(int a[], int n)
{
    int flag=0; 
    for(int i=0; i<n-1; i++)
    {
        flag=0; 
        for(int j=0; j<n-1-i; j++)   //reduce number of comparison
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0) { break;}  //if there is no swaping means that the array is sorted
    }
}
int main()
{
    int a[]={3,7,9,10,5,6,5};
    int n=7;
    bubble(a,7);

    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
