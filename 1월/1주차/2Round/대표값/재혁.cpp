#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int blank[10]; //¼ö¸¦ ´ãÀ» ºó Ä­
	int sum = 0;	//ÇÕ
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &blank[i]);
		sum += blank[i];
	}
	
	sort(blank, blank + 10);

	int count = 1;
	int frq = 0;
	int frq_Num = 0;
	int Num = blank[0];
	for (int i = 1; i < 10; i++)
	{
		if (Num == blank[i])
		{
			count++;
		}
		else 
		{
			Num = blank[i];
			count = 1;
		}

		if (count >= frq)
		{
			frq_Num = Num;
			frq = count;
		}
	}
	printf("%d\n%d", sum / 10, frq_Num);
	return 0;
}
