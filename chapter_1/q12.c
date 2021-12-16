#include <stdio.h>

#define IN 1 /* 字符在单词里 */
#define OUT 0 /* 单词外的字符 */

int main(){
    int c, state;
    state = IN;
    while((c = getchar()) != EOF){
        if(' ' == c || '\n' == c || '\t' == c){
            state = OUT;
        } else if (OUT == state){
            state = IN;
            printf("\n");
        }
        if(state == IN)
            printf("%c", c);
    }
    return 0;
}

