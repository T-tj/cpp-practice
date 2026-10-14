//可运行，但会超时

// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   long long N,K;
//   cin>>N>>K;
//   vector<long long>A(N);
//   for (int i = 0;i<N;i++)
//   {
//     cin>>A[i];
//   }

//   int ans = 0; 
  
//   for(int left = 0;left<=N-K;left++)
//   {
//     int right = left + K -1;
//     vector<long long>new_A;
    
//     for(int i = 0; i<N;i++)  
//     {
//         if(i<left || i>right)
//         {
//             new_A.push_back(A[i]);
//         }
//     }

//         bool ok = true;

//         for(int i = 0; i<(int)new_A.size()-1;i++)
//         {
//             if(new_A[i]>new_A[i+1])
//             {
//                 ok = false;
//                 break;
//             }
//         }
//         if(ok)
//         {
//             ans++;
//         }
    
//   }
 
  
// cout<<ans<<'\n';
//   return 0;
// }




//逻辑大体不变，优化运行速度
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 优化输入输出速度，防止读入 10^5 数据也超时
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 预处理：前缀是否非递减
    // pre_ok[i] 表示从下标 0 到 i 这一段是否非递减
    vector<bool> pre_ok(N, true);
    for (int i = 1; i < N; i++) {
        if (A[i - 1] > A[i]) {
            pre_ok[i] = false;
        } else {
            pre_ok[i] = pre_ok[i - 1];
        }
    }

    // 预处理：后缀是否非递减
    // suf_ok[i] 表示从下标 i 到 N-1 这一段是否非递减
    vector<bool> suf_ok(N, true);
    for (int i = N - 2; i >= 0; i--) {
        if (A[i] > A[i + 1]) {
            suf_ok[i] = false;
        } else {
            suf_ok[i] = suf_ok[i + 1];
        }
    }

    int ans = 0;

    // 滑动窗口枚举所有拆除位置
    for (int L = 0; L <= N - K; L++) {
        int R = L + K - 1; // 当前拆除窗口的右边界

        // 1. 检查前半段（0 ~ L-1）是否合法
        bool left_ok = (L == 0) || pre_ok[L - 1];

        // 2. 检查后半段（R+1 ~ N-1）是否合法
        bool right_ok = (R == N - 1) || suf_ok[R + 1];

        // 3. 检查交界处（前半段最后一个 与 后半段第一个 的大小关系）
        bool cross_ok = true;
        if (L > 0 && R < N - 1) {
            if (A[L - 1] > A[R + 1]) {
                cross_ok = false;
            }
        }

        // 三个条件都满足，方案才合法
        if (left_ok && right_ok && cross_ok) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}