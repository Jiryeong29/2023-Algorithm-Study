#include<iostream>
#define endl '\n'
using namespace std;

void indent(int a) {
	for (int i = 0; i < a; i++)
		cout << "____";
}

void talk(int start, int end) {
	indent(start);
	cout << "\"����Լ��� ������?\"" << endl;
	if (start == end) {
		indent(start);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
	}
	else {
		indent(start);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
		indent(start);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
		indent(start);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
	}
	if (start != end) {
		int tmp = start + 1;
		talk(tmp, end);
	}
	indent(start);
	cout << "��� �亯�Ͽ���." << endl;
}



int main()
{
	int cnt;
	cin >> cnt;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	talk(0, cnt);


	return 0;
}