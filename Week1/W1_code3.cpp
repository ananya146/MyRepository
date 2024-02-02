#include<iostream>
using namespace std;

int linear_search(int arr[],int l,int u,int key)//search the key in the interval
{
    for(int i=l;i<=u;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int min(int n,int i)//to check if i is not exceeding the upperbound
{
    if(i<n)
        return i;
    return n;
}
int search(int arr[],int key,int n)//to determine the interval 2^k-2^(k+1)
{
    int i=1;
    if(arr[0]==key)
        return 0;

    while(i<n && arr[i]<=key)
    {
        i*=2;
    }
    int res=linear_search(arr,i/2,min(n-1,i),key);
    return res;
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
    int result=search(arr,key,n);
    //check the results
    if(result==-1)
    {
        cout<<"key not found\n";
    }
    else
    {
        cout<<"key found at index :\t"<<result;
    }
}
