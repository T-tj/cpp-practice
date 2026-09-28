#include<iostream>
using namespace std;
//long long a[100001];  //改前
const int maxN = 100001;
long long a[maxN];//改后
int main() {
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >>a[i] ;
	}
	long long sum = 0;
	for (int i = 0; i < K; i++)
	{
		sum += a[i];
	}
	long long max_sum = sum;
	for (int i = K; i < N; i++)
	{
		sum += a[i];
		sum -= a[i - K];
		if (sum > max_sum)
		{
			max_sum = sum;
		}
	}
	cout << max_sum << '\n';
	return 0;
}
