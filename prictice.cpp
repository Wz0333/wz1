#include <stdio.h>
#include <stdlib.h>

int max_sub_sum(const int* a, int n) {
    int max_sum = 0; // 最大子数组和
    int current_sum = 0; // 当前子数组和
    
    for (int i = 0; i < n; i++) {
        if (current_sum + a[i] > 0) {
            current_sum += a[i]; // 更新当前子数组和
        } else {
            current_sum = 0;
        }
        
        if (current_sum > max_sum) {
            max_sum = current_sum; // 更新最大子数组和
        }
    }
    
    return max_sum;
}

int main() {
    int n;
    printf("请输入数据的个数：");
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    printf("请输入 %d 个数据：\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int value = max_sub_sum(a, n);
    printf("最大连续子序列和为：%d\n", value);

    free(a);
    return 0;
}
