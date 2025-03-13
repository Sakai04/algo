#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    // y < x인 경우: 버스는 S -> J로 가는 도중 → 다음 S 도착까지 x + y 분 소요
    // y > x인 경우: 버스는 J -> S로 가는 도중 → S 도착까지 y - x 분 소요
    if (y < x)
        cout << x + y << endl;
    else
        cout << y - x << endl;
    
    return 0;
}