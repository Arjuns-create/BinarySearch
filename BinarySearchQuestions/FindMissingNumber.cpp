#include<iostream>
using namespace std;

int FindMissingNumber(int arr[],int n)//find missing number in a sorted array
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        
        int diff=arr[mid]-mid;

        if(diff==1){
            //right me jaao;
            s=mid+1;
        }
        else{
            //ans store kro 
            ans=mid;
            //left me jaao
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    if(ans+1==0) //for managing the corner case when the missing element is last element
    {
        return n+1;
    }
    return ans+1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};

    int n=8;

    cout << "Missing element is: " << FindMissingNumber(arr,n);
    
}