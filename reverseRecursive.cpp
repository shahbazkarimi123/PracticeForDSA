#include<iostream>
using namespace std;
void reverseRecursion(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseRecursion(arr,start+1,end-1);

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
    int arr[]={7,4,3,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    reverseRecursion(arr,0,size-1);
    display(arr,size);
    return 0;
}