#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
int temp;
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}
int main()
{
    int a[20],n;
    cout<<"how many elements to sort:";
    cin>>n;
    cout<<"enter "<<n<<" "<<"unsorted elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"sorted list is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

//output
//PS D:\Ruturaj> cd "d:\Ruturaj\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
//how many elements to sort:5
//enter 5 unsorted elements:50 30 40 20 10
//sorted list is:
//10
//20
//30
//40
//50
//PS D:\Ruturaj> 