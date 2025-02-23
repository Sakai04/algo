#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int func12(int n, int arr[]){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 5 == 0){
            cnt = cnt + 1;
        }
    }
    printf("hello\n");
    return cnt;
}

int main(){
    int n = 4;
    int arr[] = {3, 5, 10, 20};
    int res = 0;
    res = func12(n, arr);
    printf("%d",res);
    return 0;
}