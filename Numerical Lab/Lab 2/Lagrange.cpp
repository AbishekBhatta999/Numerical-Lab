//Lagrange Interpolation method
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of terms" << endl;
    cin >> n;
    vector<float> X(n), Y(n);
    float x, sum = 0, term;
    int i, j;

    cout << "Enter Values of X" << endl;
    for (i = 0; i < n; i++)
        cin >> X[i];
    cout << "Enter Values of Y" << endl;
    for (i = 0; i < n; i++)
        cin >> Y[i];

    cout << "Enter value of x for which you want y" << endl;
    cin >> x;

    for (i = 0; i < n; i++){
      term = 1;
        for (j = 0; j < n; j++){
            if (i != j)
                term = term * ((x - X[j]) / (X[i] - X[j]));
        }
        sum = sum + term * Y[i];
    }
    cout << "\nValue at X=" << x << " is = " << sum << endl;
}
