#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C;
vector<int> x; // 집 좌표
int result = -1; // 최종 답

bool check(int mid) {
    //첫번째 집 셋팅해두고 시작
    int cnt = 1; //사용되는 공유기 개수
    int prev = x[0]; // 일단 첫번째집.
    for (int i = 1; i < N; i++) // 모든집을 탐색할건데
    {
        if (x[i] - prev >= mid) { // 주어진 거리만큼 갈 수 있으면 
            cnt++; //공유기 설치하고,
            prev = x[i]; // 해당집을 기준으로 다시 잡음.
        }
    }
    if (cnt >= C) return true; // 되는 조건이면 true, 더 큰 수 탐색해야함.
    else return false; // 안되는 조건이면 fasle, 더 작은 수 탐색해야함.
}

void b_search() {

    int left = 0; //0번 위치
    int right = x.back();//마지막 집 위치

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        //return true -> 큰 수 탐색 = left옮기기.
        if (check(mid)) {
            left = mid + 1;
            if (result < mid) // 최대값 찾기.
                result = mid;

        }
        //return false -> 작은 수 탐색 = right 옮기기.
        else right = mid - 1;
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end()); //정렬하고 시작.
    b_search();
    cout << result;
}
