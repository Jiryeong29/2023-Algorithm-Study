#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N[500000];
int M[500000];

int Lower(int target, int size)
{
	int mid;
	int left = 0;
	int right = size;

	while (left < right)
	{
		mid = left + (right - left) / 2;

		if (target <= N[mid])
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

int Higher(int target, int size)
{
	int mid;
	int left = 0;
	int right = size;

	while (left < right)
	{
		mid = left + (right - left) / 2;
		if (target < N[mid])
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

int main(int argc, char* argv[]) {

	int num, mum;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
		scanf("%d", &N[i]);

	sort(N, N + num);

	scanf("%d", &mum);

	for (int i = 0; i < mum; i++)
		scanf("%d", &M[i]);

	int* result = new int[mum];

	for (int i = 0; i < mum; i++)
	{
		int lower = Lower(M[i], num);
		int higher = Higher(M[i], num);
		result[i] = higher - lower;
		printf("%d ", result[i]);
	}

	return 0;
}