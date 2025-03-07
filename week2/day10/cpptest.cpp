#include <bits/stdc++.h>
using namespace std;

char func(string s, int idx) {
    if (idx < 0 || idx >= s.size()) return '\0'; // 범위 체크
    return s[idx]; // 해당 위치 문자 반환
}

int main(void) {
    string s;
    int n;
    cin >> s >> n; // 문자열과 정수 입력

    char result = func(s, n);
    if (result == '\0') {
        cout << "NULL" << endl; // 범위 벗어나면 NULL 출력
    } else {
        cout << result << endl; // 결과 출력
    }

    return 0;
}