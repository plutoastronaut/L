#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main   主要() {
    // 定义长方体的长宽高
    double length, width, height;

    // 用户输入长方体的长宽高
    printf("请输入长方体的长：");
    scanf("%lf", &length);
    printf("请输入长方体的宽：");
    scanf("%lf", &width);
    printf("请输入长方体的高：");
    scanf("%lf", &height);

    // 计算长方体的体积
    double volume = length * width * height;

    // 输出长方体的体积
    printf("长方体的体积是：%.2f\n", volume);

    return 0;
}
