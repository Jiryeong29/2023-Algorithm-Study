#include<iostream>
#include<stack>
#include<list>
#define endl '\n'
using namespace std;


int main()
{
	int N;
	cin >> N;
	int* ans = new int[N];
	for (int i = 0; i < N; i++) { cin >> ans[i]; }
	int point = 0;
	stack<int> buffer;
	list<char> answer;

	for (int i = 1; i < N + 1; i++) {
		buffer.push(i);
		answer.push_back('+');
		
		while(ans[point] == buffer.top()) {
			point++;
			buffer.pop();
			answer.push_back('-');

			if (point == N || buffer.empty())break;
		}
	}
	if (point != N) {
		cout << "NO";
	}
	else {
		for (auto it = answer.begin(); it != answer.end(); it++) {
			cout << *it << endl;
		}
	}








	return 0;
}