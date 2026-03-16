#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int mid = (a != max && a != min) ? a : (b != max && b != min) ? b : c;
    mid = (a == b && a == c) ? a :
        (a == b) ? (a > c ? a : c) :
        (a == c) ? (a > b ? a : b) :
        (b == c) ? (b > a ? b : a) : mid;

    cout << "Числа в порядке убывания: " << max << " " << mid << " " << min << endl;
    return 0;
}