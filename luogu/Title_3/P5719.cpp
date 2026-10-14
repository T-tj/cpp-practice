//分类平均
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    long long sumA = 0, sumB = 0; 
    int num1 = 0, num2 = 0;       
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sumA += i;
            num1++;
        } else {
            sumB += i;
            num2++;
        }
    }
    cout << fixed << setprecision(1) 
         << (double)sumA / num1 << " " 
         << (double)sumB / num2 << '\n';      
    return 0;
}