#include<iostream>
#include<algorithm>
#include<cstring>
#define endl '\n'
using namespace std;

struct info {
	int weight, hight;
};


int main()
{
	int N;
	cin >> N;

	info* arr = new info[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i].weight >> arr[i].hight;
	}

	int* result = new int[N];
	for (int i = 0; i < N; i++) {
		result[i] = 1;
		for (int k = 0; k < N; k++) {
			if (arr[i].weight < arr[k].weight && arr[i].hight < arr[k].hight) {
				result[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}


	return 0;
}