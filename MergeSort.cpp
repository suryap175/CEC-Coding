#include<bits/stdc++.h>
using namespace std;

void swap(int*a, int*b)
{
int temp;
temp= *a;
*a = *b;
*b = temp;
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void MergeSort(int arr[],int l, int r)
{
    if (l<r)
    {
        int mid=l+(r-l/2);
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
}
void merge(int arr[],int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1], b[n2];
    while(i<n1)
    {
        a[i]=arr[l+i];
        i++;

    }
    while(j<n2)
    {
        b[j]=arr[mid+1-j];
        j++;

    }
    int i=0, j=0,k=l;
    while(i<n1 && j<n2) 
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else 
        {
            arr[k]=b[j];
            j++;
            k++;
        }
}
while(i<n1)
{
    arr[k++]=arr[i++];
}
while(j<n2)
{
    arr[k++]=b[j++];
}
}
int main()
{
    int n,i,j;
    cout<<"Enter Array Limit\n";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Bound\n";
    for(i=0;i<n;i++)
    cin>>arr[i];

MergeSort(arr,l,r);
display(arr,n);
}
