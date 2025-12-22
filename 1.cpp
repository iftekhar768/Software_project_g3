#include<iostream>
using namespace std;
int main ()
{
    int arr[]={5,10,15,20,25,30};
    int n=6;
    float sum;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg =sum/n;
    cout << avg << endl;
    return 0;
}
