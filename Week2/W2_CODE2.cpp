#include<iostream>
using namespace std;
int main()
{
    int n,arr[n];
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the array elements\n"; //consider array to be a sorted array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *x=NULL,*y=NULL,*z=NULL;
    x=&arr[0];
    y=&arr[n-1];
    int i=0,j;

    while(x<y)
    {
        if(*x+*y>*y)
        {
            y=y-1;
        }
        z=y;
        while(z<x+(n-1))
        {
            if(*z==*x+*y)
            {
                cout<<*x<<"\t"<<*y<<"\t"<<*z<<"\n";
            }
            if(x==y)
            {
                break;
            }
            y=y-1;

        }
        i++;
        x=&arr[i];
    }
}
