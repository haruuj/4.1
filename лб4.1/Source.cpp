#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k;
    cout << " k = ";
    cin >> k;
    if (k > 15) {
        cout << "k < 15 = 15 " << endl;
        return 1;
    }
    double sum1 = 0.0;
    int i = k;
    while (i <= 15) {
        sum1 += cos(i) / (1 + pow(sin(i), 2));
        i++;
    }
    double sum2 = 0.0;
    i = k;
    do {
        sum2 += cos(i) / (1 + pow(sin(i), 2));
        i++;
    } while (i <= 15);
    double sum3 = 0.0;
    for (int i = k; i <= 15; i++) {
        sum3 += cos(i) / (1 + pow(sin(i), 2));
    }
    double sum4 = 0.0;
    for (int i = 15; i >= k; i--) {
        sum4 += cos(i) / (1 + pow(sin(i), 2));
    }

    cout << "while= " << sum1 << endl;
    cout << "do-while= " << sum2 << endl;
    cout << "for = " << sum3 << endl;
    cout << "for = " << sum4 << endl;

    return 0;
}