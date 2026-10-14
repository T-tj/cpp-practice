// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//     int N,K,C;
//     long long B;
//     cin>>N>>K>>C>>B;
//     vector<long long>v(N);

//      long long sum = 0;
//     for(int i = 0;i<N;i++)
//     {
//         cin>>v[i];
//         sum+=v[i];
//     }
//     sort(v.begin(),v.end());

//     int N_max = N-1;
//     while((sum+(N_max+1+K-1)/K*C)>B && N_max >= 0)
//     {
//         sum-=v[N_max];
//         N_max--;
//     }
//     if(N_max<0)
//     {
//         cout<<0<<'\n';
//     }
//     else
//     {
//         cout<<N_max+1<<'\n';
//     }

//     return 0 ;
// }





#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, K, C;
    long long B;
    cin >> N >> K >> C >> B;
    vector<long long> v(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // 从小到大排序

    long long sum = 0; // 累计的游玩费用
    int ans = 0;       // 最多安排的人数

    for (int i = 0; i < N; i++) {
        int cnt = i + 1; // 当前想要安排的人数
        long long car_cost = ((long long)cnt + K - 1) / K * C; // 租车费
        
        // 如果当前总费用不超预算
        if (sum + v[i] + car_cost <= B) {
            sum += v[i];
            ans = cnt;
        } else {
            // 因为数组是从小到大排序的，如果当前最便宜的都加不进去，
            // 后面更贵的肯定也加不进去，直接结束循环
            break; 
        }
    }

    cout << ans << '\n';
    return 0;
}