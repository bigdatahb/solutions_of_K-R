#include <stdio.h>

// 将输入复制到输出, 制表符替换为\t, 回退符替换为\b, 反斜杠替换为\\.
int main(){
    int c;
    while((c=getchar()) != EOF){
        if(c == '\t'){
            printf("\\t");
            continue;
        }
        if(c == '\b'){
            printf("\\b");
            continue;
        }
        if(c == '\\'){
            printf("\\\\");
            continue;
        }
        printf("%c", c);
    }
    return 0;
}

