#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    string op;
    int i = 1;
    int n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        if (i <= num)
        {
            while (i <= num)
            {
                st.push(i);
                op += '+';
                i++;
            }
            st.pop();
            op += '-';
        }
        else
        {
            if (st.top() < num)
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                st.pop();
                op += '-';
            }
        }
    }
    for (int j = 0; j < op.length(); j++)
    {
        cout << op[j] << "\n";
    }
    return 0;
}