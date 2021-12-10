#include <stdio.h>

int main(){
    printf("EOF: %d\n", EOF); // 打印 EOF 的值
    int res;
    while(1){
        res = (getchar() != EOF);
        if(res == 0)
            break;
        printf("getchar() != EOF: %d\n", res);
    }
    printf("getchar() != EOF: %d\n", res);
    return 0;
}

