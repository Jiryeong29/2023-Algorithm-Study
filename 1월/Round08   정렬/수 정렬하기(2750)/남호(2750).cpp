#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;


int main()
{
	vector<int> v;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}

//버블 정렬 O(N^2)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<math.h>
using namespace std;

void bubble(long arr[], int n) {
	int a;
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	long* arr = new long[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bubble(arr, n);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}

//합병정렬
# include<iostream>
# include <stdio.h>
# define MAX_SIZE 1000
using namespace std;
int sorted[MAX_SIZE]; // 추가적인 공간이 필요


void merge(int list[], int left, int mid, int right) {
   
    
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while (i <= mid && j <= right) {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // 남아 있는 값들을 일괄 복사
    if (i > mid) {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // 남아 있는 값들을 일괄 복사
    else {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for (l = left; l <= right; l++) {
        list[l] = sorted[l];
        
    }
    
}

// 합병 정렬
void merge_sort(int list[], int left, int right) {
    int mid;
    if (left < right) {
      
        mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
       
        merge_sort(list, left, mid);// 앞쪽 부분 리스트 정렬 -정복(Conquer)
       
        merge_sort(list, mid + 1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
        
        merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
        
    }
}

int main() {
    int n;
    cin >> n;
    int* list = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    // 합병 정렬 수행(left: 배열의 시작 = 0, right: 배열의 끝 = 7)
    merge_sort(list, 0, n - 1);

    // 정렬 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d\n", list[i]);
    }
}
