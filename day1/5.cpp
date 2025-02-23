#include <iostream>

int func4 (int N) {
    int val = 1;
    while (2 * val <= N){
        val = val *2;
    }
    return val;
}
int main(){
    int N = 4096;
    int res = 0;
    res = func4(N);
    printf("%d",res);

}