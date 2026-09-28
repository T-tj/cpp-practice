#include<iostream>
using namespace std;
int main() {
	const int maxA = 2005;
	int A[maxA];
	int odd[1005], even[1005];
	int odd_x = 0;
	int even_x = 0;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 != A[i] % 2)
		{
			cout << -1 << '\n';
			return 0;
		}

		if (i % 2 == 1)
		{
			odd[odd_x++] = A[i];
		}
		else
		{
			even[even_x++] = A[i];
		}
	}
	long long y = 0;
	for (int i = 0; i < odd_x ; i++)
	{
		for (int j = i+1; j < odd_x ; j++)
		{
			if (odd[i] > odd[j])
			{
				y++;
			}
		}
	}
	for (int i = 0; i < even_x; i++)
	{
		for (int j = i + 1; j < even_x; j++)
		{
			if (even[i] > even[j])
			{
				y++;
			}
		}
	}
	cout << y << '\n';
	return 0;
}