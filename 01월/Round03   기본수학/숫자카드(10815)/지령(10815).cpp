#include <iostream>
#include <set>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int N;
	cin >> N;

	set<int> s;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		s.insert(num);
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		if (s.find(num) != s.end()) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}