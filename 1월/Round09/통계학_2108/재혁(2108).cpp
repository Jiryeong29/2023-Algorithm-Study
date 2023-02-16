#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>

#define endl '\n'
using namespace std;

int main()
{
	//첫째 산술평균
	//둘째 중앙값
	//셋째 최빈값 - 여러개 있을경우 두 번째로 작은 값
	//넷째 범위 ( 큰 값 - 작은 값 )

	int N;
	cin >> N;
	map<int, int> arr;
	int* Num = new int[N];

	double mean = 0;
	for (int i = 0; i < N; i++) {
		cin >> Num[i];
		mean += Num[i];

		if (arr.find(Num[i]) != arr.end()) { arr[Num[i]]++; }
		else { arr.insert({ Num[i], 1 }); }
	}
	sort(Num, Num + N);


	mean = round(mean / N);
	if (mean == -0)mean = 0;
	int middle = Num[N / 2];

	int mode[2] = { 0 };
	int overlap = false;
	for (auto iter = arr.begin(); iter != arr.end(); iter++) {
		if (iter->second > mode[1]) {
			mode[0] = iter->first;
			mode[1] = iter->second;
			overlap = false;
			continue;
		}
		if (iter->second == mode[1] && !overlap) {
			mode[0] = iter->first;
			mode[1] = iter->second;
			overlap = true;
		}

	}

	int range = Num[N - 1] - Num[0];
	
	cout << mean << endl << middle << endl << mode[0] << endl << range;


	return 0;
}