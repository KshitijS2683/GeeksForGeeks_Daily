#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int k = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = k;j<k+i;j++)
        {
            cout << j;
            cout << ' ';
        }
        cout << '\n';
        k += i;
    }

    return 0;
}