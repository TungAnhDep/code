#include <iostream>
using namespace std;

void spiral(int m, int n, int a[][100])
{
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;

        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;

        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }

    cout << endl;
}

void input(int n, int m, int a[][100])
{
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            cin >> a[j][k];
        }
    }
}
int main()
{
    int t, m[100], n[100], a[10][100][100], i, j, k;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n[i] >> m[i];
        input(n[i], m[i], a[i]);
    }

    for (i = 0; i < t; i++) {
        spiral(n[i], m[i], a[i]);
    }

    return 0;
}