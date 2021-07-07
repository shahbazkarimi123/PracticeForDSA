#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}
void display(int arr[],int end)
{
    for(int i=0;i<end;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int main()
{
    int arr[]={8,9,7,2,3,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    reverseArray(arr,0,size-1);
    display(arr,size);
    return 0;
}