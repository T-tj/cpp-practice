//三位数排序

//1
// #include <iostream>
// #include <algorithm> // 引入 swap 函数的头文件
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
    
//     // 1. 比较 a 和 b，把较小的放到 a
//     if (a > b) {
//         swap(a, b);
//     }
    
//     // 2. 比较 a 和 c，把最小的放到 a
//     if (a > c) {
//         swap(a, c);
//     }
    
//     // 3. 此时 a 已经最小，只需比较 b 和 c，把较小的放到 b
//     if (b > c) {
//         swap(b, c);
//     }
    
//     // 输出结果
//     cout << a << ' ' << b << ' ' << c << '\n';
    
//     return 0;
// }


//2
// #include <iostream>
// #include <algorithm> // 使用 sort 函数
// using namespace std;

// int main() {
//     int a[3];
//     // 循环读入三个数
//     for (int i = 0; i < 3; i++) {
//         cin >> a[i];
//     }
    
//     // 对数组进行从小到大排序（默认升序）
//     sort(a, a + 3);
    
//     // 输出排序后的结果，用空格隔开
//     cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
    
//     return 0;
// }


//3
#include <iostream>
using namespace std;

int main() {
    int a[3];
    // 循环读入 3 个数
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    // 纯手工冒泡排序
    // 外层循环：控制比较的轮数，N个数需要 N-1 轮
    for (int i = 0; i < 3 - 1; i++) {
        // 内层循环：控制相邻比较的次数
        for (int j = 0; j < 3 - 1 - i; j++) {
            if (a[j] > a[j + 1]) { // 前一个数大于后一个数
                // 手工交换，不用 swap() 函数
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 输出
    for (int i = 0; i < 3; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}