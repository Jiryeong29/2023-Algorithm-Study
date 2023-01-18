#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int data_num;
	cin >> data_num;

	int* result = new int[data_num];
	for (int i = 0; i < data_num; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int floor = N % H;
		int room = N / H+1;
		if (floor == 0)
		{
			floor = H;
			room--;
		}


		result[i] = (floor * 100) + room;
	}
	for (int i = 0; i < data_num; i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}