#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    cout << "Enter no. of terms" << endl;
    cin >> n;
    
    vector<vector<float>> a(n, vector<float>(n + 1));

    cout << "Enter Values of X" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i][0];

    cout << "Enter Values of Y" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i][1];

    cout << "Enter value of x for which you want y" << endl;
    float x;
    cin >> x;

    for (int j = 2; j < n + 1; j++) {
        for (int i = 0; i < n - j + 1; i++)
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
    }

    cout << "The Difference Table is as follows:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    float u = (x - a[0][0]) / (a[1][0] - a[0][0]);
    float y = a[0][1];
    float u1 = u;
    float fact = 1;
    for (int i = 2; i <= n; i++) {
        y = y + (u1 * a[0][i]) / fact;
        fact = fact * i;
        u1 = u1 * (u - (i - 1));
    }
    cout << "\nValue at X=" << x << " is = " << y << endl;

    return 0;
}
