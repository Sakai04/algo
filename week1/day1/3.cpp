#include <iostream>

int func2(int N, int arr[]){
    int res = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == 100){
                res = 1;
            }
        }
    }
    return res;
}

int main(){
    int N  = 2;
    int arr[] = { 10, 2};
    int res = 0;
    res = func2(N, arr);
    printf("%d",res);
   
}
