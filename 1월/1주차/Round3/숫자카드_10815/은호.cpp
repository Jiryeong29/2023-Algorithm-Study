#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool found = false;

void BinarySearch(vector<int>& v, int start, int end, int subject)
{
    if (start > end)
        return;

    int mid = (end + start) / 2;
    if (v[mid] == subject)
    {
        found = true;
        return;
    }
    else if (v[mid] > subject)
        BinarySearch(v, start, mid - 1, subject);
    else
        BinarySearch(v, mid + 1, end, subject);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());

    for (int i = 0; i < m; i++)
    {
        found = false;
        BinarySearch(v1, 0, v1.size(), v2[i]);
        if (found)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }

    return 0;
}