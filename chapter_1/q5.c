#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper; // 从 upper 开始
    printf("fahr celsius\n"); // 打印标题
    while(fahr >= lower){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
    return 0;
}

