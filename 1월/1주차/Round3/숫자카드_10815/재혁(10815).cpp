#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{



	int PlayerNumber;
	scanf("%d", &PlayerNumber);
	
	
	
	int* PlayerCard = new int[PlayerNumber];
	
	
	
	
	for (int i = 0; i < PlayerNumber; i++)
	{
		scanf("%d", &PlayerCard[i]);
	}

	int IntNumber;
	scanf("%d", &IntNumber);
	
	
	int* Integer = new int[IntNumber];

	
	
	for (int i = 0; i < IntNumber; i++)
	{
		scanf("%d", &Integer[i]);
	}


	sort(PlayerCard, PlayerCard + PlayerNumber);

	for (int i = 0; i < IntNumber; i++)
	{
		int left = 0, right = PlayerNumber;
		while (true)
		{
			int mid = (left + right) / 2;
			if(right)

			if (PlayerCard[mid] == Integer[i])
			{
				printf("1 ");
				break;
			}

			if (PlayerCard[mid] < Integer[i])
			{
				left = mid + 1;
			}
			else { right = mid; }
			
			if (right == left )
			{
				printf("0 ");
				break;
			}
		}

	}


	delete[] Integer;
	delete[] PlayerCard;



	return 0;
}