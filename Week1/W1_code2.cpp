#include<iostream>
using namespace std;
void search(int arr[],int key,int n)
{
    while(l<=r)
    {
        int m=l+(r-1)/2;

        if(arr[m]==key)
        returm m;

        if(arr[m]<key);
        l=m+1;

        else
        r=m-1;
    }

    return -1;
}
main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n],key;
    cout<<"enter the elements in array\n";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    cout<<"enter the key\n";
    cin>>key;
    int result=search(arr,key,0,n-1);

    if(result==-1)
    {
        cout<<"Key not found\n";
    }
    else
    {
        cout<<"Key found at"<<result;
    }
}
