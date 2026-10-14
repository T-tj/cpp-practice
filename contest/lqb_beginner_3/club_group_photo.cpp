#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N;
    long long K;
    cin>>N>>K;
    vector<long long>H(N);
    for(int i = 0;i<N;i++)
    {
        cin>>H[i];
    }
    sort(H.begin(),H.end());
    int ans = 0;
    int shortest = 0;
    for(int highest = 0;highest<N;highest++)
    {
        while(H[highest]-H[shortest]>K)
        {
            shortest++;
        }
        ans = max(ans,highest-shortest+1);
    }
    cout<<ans<<'\n';

    return 0;
}