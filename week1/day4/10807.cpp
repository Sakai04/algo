#include <iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, V, arr[201] = {};
  cin >> N;

  //N 번 돌면서 곂친 수 만큼 X에 저장해준다.
  while (N--)
  {
    int X; // X 선언
    cin >> X; // N 만큼
    arr[X + 100]++;
    
  }

  // 출력 부분
  cin >> V;
  cout << arr[V + 100];

}