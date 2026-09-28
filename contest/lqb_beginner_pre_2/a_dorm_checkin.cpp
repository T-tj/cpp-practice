#include<iostream>
using namespace std;
int main() {
	int N;
	int K;
	cin >> N >> K;
	if (N % K != 0)
	{
		cout << N / K + 1 << endl;
	}
	else
	{
		cout << N / K << endl;
	}
	return 0;
}