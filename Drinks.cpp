#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    double sum=0.0;
    double avg=0.0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        avg=sum/n;
    }
    
    cout<<avg<<endl;

    return 0;
}
