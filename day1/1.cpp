#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int  main(int  arr[], int  n){
    int  cnt = 0;
    for (int i = 0; i < n;   i++){
        if (arr[i] % 5== 0) cnt++;
            cnt += i;
        }
    return  cnt;
    }


