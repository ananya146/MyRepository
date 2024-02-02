#include<iostream>
using namespace std;
void search(int arr[],int key,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<arr[i]<<" found at"<<i<<"index";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"key not found";
    }
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
    search(arr,key,n);
}
