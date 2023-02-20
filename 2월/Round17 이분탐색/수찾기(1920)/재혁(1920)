#include<iostream>
#include<set>
#define endl '\n'
using namespace std;

set<int> A;

int main()  
{
    ios::sync_with_stdio(0); cin.tie(0);
	int N, M, tmp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        A.insert(tmp);
    }
    cin >> M;
    for(int i = 0; i < M;i++){
        cin >> tmp;
        if(A.find(tmp) != A.end()){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
	return 0;
}
