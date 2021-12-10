#include <stdio.h>

// 将输入复制到输出，并将多个空格合并为一个空格
int main(){
    int c, pre=0;
    while((c=getchar()) != EOF){
        if(c == ' '){
            if(pre) //前面是空格?
                continue;
            else{
                pre = 1;
                printf("%c", c);
            }
        }else{
            pre = 0;
            printf("%c", c);
        }
    }
    return 0;
}

