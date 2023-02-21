#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C;
vector<int> x; // �� ��ǥ
int result = -1; // ���� ��

bool check(int mid) {
    //ù��° �� �����صΰ� ����
    int cnt = 1; //���Ǵ� ������ ����
    int prev = x[0]; // �ϴ� ù��°��.
    for (int i = 1; i < N; i++) // ������� Ž���Ұǵ�
    {
        if (x[i] - prev >= mid) { // �־��� �Ÿ���ŭ �� �� ������ 
            cnt++; //������ ��ġ�ϰ�,
            prev = x[i]; // �ش����� �������� �ٽ� ����.
        }
    }
    if (cnt >= C) return true; // �Ǵ� �����̸� true, �� ū �� Ž���ؾ���.
    else return false; // �ȵǴ� �����̸� fasle, �� ���� �� Ž���ؾ���.
}

void b_search() {

    int left = 0; //0�� ��ġ
    int right = x.back();//������ �� ��ġ

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        //return true -> ū �� Ž�� = left�ű��.
        if (check(mid)) {
            left = mid + 1;
            if (result < mid) // �ִ밪 ã��.
                result = mid;

        }
        //return false -> ���� �� Ž�� = right �ű��.
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
    sort(x.begin(), x.end()); //�����ϰ� ����.
    b_search();
    cout << result;
}