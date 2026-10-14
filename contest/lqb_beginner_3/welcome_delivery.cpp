#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;

    vector<int>D(N);
    for(int i = 0;i<N;i++)
    {
        cin>>D[i];
    }
    sort(D.begin(),D.end());
    long long sum = 0;
    for(int i = 0;i<N-1;i++)
    {
        sum += D[i];
    }
    
    long long all_D = D[N-1]+2*sum; 
    cout<<all_D<<'\n';
    return 0;
}