#include <iostream>
using namespace std;

/**
 * 串的模式匹配——暴力算法
 * S-主串 T-模式串
 * */
int Index(char *S, char *T) {
    int S_len = strlen(S);
    int T_len = strlen(T);
    int i = 0, j = 0;
    while (i < S_len && j < T_len) {
        if (S[i] == T[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1;//主串指针回退
            j = 0;
        }
    }
    if (j == T_len) {
        return j - i;
    } else {
        return -1;
    }
}
//TODO KMP