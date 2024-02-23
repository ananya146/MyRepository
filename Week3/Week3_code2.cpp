#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i,small,temp,j,comp=0,swap=0;
    for(i=0;i<n;i++)
    {
        small=i;

        for(j=i+1;j<n;j++)
        {
            comp++;
            if(arr[j]<arr[small])
            {
                small=j;
            }
        }

        temp=arr[small];
        arr[small]=arr[i];
        arr[i]=temp;
        swap++;
    }

    cout<<"Comparisons="<<comp<<"\nSwaps="<<swap<<endl;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    selectionSort(arr,n);

    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    return 0;
}
