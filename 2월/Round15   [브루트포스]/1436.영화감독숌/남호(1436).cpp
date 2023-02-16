#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
using namespace std;


int main()
{   
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   int n;
   int result = 665;
   string temp;
   cin >> n;
   for (int i = 0; i < n; i++) {
      while (1) {
         result++;
         temp = to_string(result);
         if (temp.find("666") != -1)
            break;
      }
   }
   cout << result << '\n';
}
