#include<iostream>
using namespace std;
int freq(arr[],int key)
{
    return upper_bound(arr.begin(),arr.end(),key)-lower_bound(arr.begin(),arr.end(),key);
}
int main()
{
    int n,frequency,key;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the array elements\n"; //consider array to be a sorted array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key\n";
    cin>>key;
    frequency=freq(arr,key);
    cout<<"the frequency of "<<key<<" is "<<frequency<<"\n";
}
