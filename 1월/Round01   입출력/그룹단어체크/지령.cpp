#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, iCount=0, j = 0;
	cin >> N; //100개 미만
	string str; // 100자 미만
	bool alpha[26];



	for (int i = 0; i < N; ++i)
	{
		cin >> str;
		bool alpha[26] = { false, };

		
		alpha[str[0] - 97] = true;

		for ( j = 1; j < str.length(); ++j) 
		{
			// 이전단어와 다를경우
			if (str[j - 1] != str[j]) {
				// 나온 적 있으면 alpha체크
				if (alpha[str[j] - 97] == false) { alpha[str[j] - 97] = true;}
				// 나온 적 없으면 탈출
				else 
					break;
			}

			// 연속될 경우 => 그냥 넘어감
		}
		// 모든 단어를 탈출하지 않고 체크했으므로 그룹단어 => iCount++;
		if (j == str.length()) {
			iCount++;
		}
	}

	cout << iCount;
}