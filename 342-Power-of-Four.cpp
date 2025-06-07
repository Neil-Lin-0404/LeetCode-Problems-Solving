#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        // 必須是正數
        if (n <= 0) return false;

        // 檢查是否為 2 的冪 (只有一個 bit 是 1)
        if ((n & (n - 1)) != 0) return false;

        // 檢查這個唯一的 1 是否出現在奇數位（0,2,4,...）
        // 0x55555555 是：01010101010101010101010101010101（二進位）只留下奇數位
        if ((n & 0x55555555) == 0) return false;

        return true;
    }
};
