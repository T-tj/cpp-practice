#include <iostream>
using namespace std;

int main() {
    long long N, L, R; // 必须用 long long，N可达10^9，paper*2可能破10^9
    cin >> N >> L >> R;

    long long paper = 0;

    // 1. 算纸张数 (完全保留你的分类讨论公式！)
    if (L % 2 == 0 && R % 2 != 0) {
        paper = 2 + (R - L) / 2;
    } else if (L % 2 != 0 && R % 2 == 0) {
        paper = 1 + (R - L) / 2;
    } else {
        paper = 1 + (R - L) / 2;
    }

    // 2. 算总共需要重新打印的页数（纸张数 × 2）
    long long total_pages = paper * 2;

    // 3. 特殊边界处理：如果总页数N是奇数，且最后一页刚好被重新打印了，那么最后一页只有正面！
    if (N % 2 != 0 && R == N) {
        total_pages -= 1; // 减去空白的背面
    }

    // 4. 核心修正：正常页数 = 总重印页数 - 原本就印错的页数(R-L+1)
    long long error_pages = R - L + 1; // 本来就不清楚的页数
    long long normal_pages = total_pages - error_pages;

    cout << paper << " " << normal_pages << '\n';

    return 0;
}