#include <iostream>

int func1(int N){
    int ret = 0;
    for(int i = 1; i <= N; i++){
        if(i % 3 == 0 || i % 5 == 0){
            ret = ret + i;
        }
    }
    return ret;
}

int main(){
    int N = 15;
    int ret = 0;
    ret = func1(N);
    printf("%d", ret);
    return 0;
}