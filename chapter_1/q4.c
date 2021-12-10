#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 100;
    step = 7.8;

    celsius = lower;
    printf("celsius fahr\n");
    while(celsius <= upper){
        fahr = (9.0 / 5.0) * celsius + 32.0;  // 摄氏转华氏，公式转换
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}

