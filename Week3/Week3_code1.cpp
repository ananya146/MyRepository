#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i,current,j,comp=0,shift=0;
    for (i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>current)
        {
            comp++;
            arr[j+1]=arr[j];
            shift++;
            j=j-1;
        }

        arr[j+1]=current;
    }

    cout<<"Comparisons="<<comp<<"\nShifts="<<shift<<endl;
}

int main()
{
    int n;
    cout<"Enter n: ";
    cin>>n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i=0;i<n;i++)
        cin>>arr[i];

    insertionSort(arr,n);

    cout<<"Sorted array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    return 0;
}
