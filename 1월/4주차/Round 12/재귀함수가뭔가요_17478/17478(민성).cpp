#include<iostream>
using namespace std;

int N;

void UnderBar(int x) { for (int i = 0; i < N - x; i++)cout << "____"; }
void LongStory(int x) {
    UnderBar(x);
    cout << "\"����Լ��� ������?\"\n";
    if (!x) {
        UnderBar(x);
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        UnderBar(x);
        cout << "��� �亯�Ͽ���.\n";
        return;
    }
    UnderBar(x);
    cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    UnderBar(x);
    cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    UnderBar(x);
    cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    LongStory(x - 1);
    UnderBar(x);
    cout << "��� �亯�Ͽ���.\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    LongStory(N);

    return 0;
}
