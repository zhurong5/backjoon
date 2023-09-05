#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double ans = a / b;
    cout.precision(10); // 출력할 실수의 자릿수를 10으로 설정한다.
    cout << fixed << ans << endl; // 소수점 이하 자릿수를 출력한다.

    return 0;
}