#include<iostream>
using namespace std;

int PeakIndexInAMountainArray(int arr[],int n)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid+1]>arr[mid])
        { // peak right me hoga
            s=mid+1;
        }
        else{
            // peak yahi hai
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[]={1,2,3,5,4,3,0};

    int n=7;

    cout << "element is: " << PeakIndexInAMountainArray(arr,n);
}