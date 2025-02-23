#include <iostream>

int func3(int N){
    int res = 0;
    for (int i = 1; i * i <= N; i++){
        if (i * i == N){
            res = 1; 
        }
    } 
    return res;
}

int main(){
    int res = 0;
    int N = 3;
    res = func3(N);
    printf("%d", res);
}