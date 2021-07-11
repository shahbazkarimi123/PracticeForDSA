#include<iostream>
using namespace std;
void maxmin(int arr[],int start,int end)
{
    cout<<start<<endl;
    cout<<end<<endl;
    for(start;start<end;start++)
    {
        int i=start+1;
        for(i;i< end;i++)
        {
            if(arr[start]>arr[i]){
                int temp=arr[start];
                arr[start]=arr[i];
                arr[i]=temp;
            }
        }
        
    }
    cout<<"minimum value is "<<arr[0]<<endl;
    cout<<"maximum value is "<<arr[5];
}

int main()
{
    int arr[]={ 1000, 11, 445,1, 330, 3000 };
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    maxmin(arr,0,size);

    return 0;

}