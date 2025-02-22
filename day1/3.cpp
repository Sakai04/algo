#include <bits/stdc++.h>

int func2(int arr[], int N){
    for (int i = 1; i < N; i++)
        for (int j = i+1; j < N; j++)
            if (arr[i] + arr[j] == 100) return 1;
     return 0;
    }
