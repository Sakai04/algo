#include <iostream>
using namespace std;

int N, K, lft = 0;
int S[2][7] = {};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> K;
    //학생 수 저장
    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        S[a][b]++;
    }

    // 필요한 방의 수 계산
    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){
            lft += S[i][j] / K;
            // 학생이 남을 경우, 하나의 방이 더 필요하므로 방의 개수 추가
            if (S[i][j] % K){
                lft++;
            }
        }
    }
    cout << lft;
}
