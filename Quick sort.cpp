#include<iostream>
using namespace std;
void interchange(int a[],int i,int j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
int Partition(int a[],int m,int p)
{
    int v=a[p]; 
    int i=m-1;
    for(int j=m;j<p;j++)
{
    if(a[j]<v)
    {
        i++;
        interchange(a,i,j);
    }
}
interchange(a,i+1,p);
return i+1;
}
void QuickSort(int a[],int p,int q)
{
     if(p<q)
     {
        int j=Partition(a,p,q);
        QuickSort(a,p,j-1);
        QuickSort(a,j+1,q);
     }
}
int main()
{
    
    int a[100];
    int n,i;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    QuickSort(a,0,n);
    
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
}
