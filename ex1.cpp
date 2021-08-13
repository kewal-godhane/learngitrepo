//selection sort
#include<iostream>
using namespace std;
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void bubble_sort(int arr[],int n)
{
    int counter=1;
    while(counter<(n-1)){
    for(int i=0;i<(n-counter);i++){
    if(arr[i]>arr[i+1])
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    }
    counter++;
    }
    print_array(arr,n);
}
void selection_sort(int arr[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    print_array(arr,n);
}
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    bubble_sort(arr,n);
}