#include<iostream>
using namespace std;
int main()
{
    int arr[5],sum=0;
    cout<<"enter numbers";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    for(int i=0;i<5;i++)
    sum+=arr[i];
    cout<<endl<<sum;
}
