#include <stdio.h>


int main(){
	char c;
	int sc, tc, nc;
	sc = tc = nc = 0;
	while((c=getchar()) != EOF){
		if(c == ' '){
			++sc;
			continue;
		}
		if(c == '\t'){
			++tc;
			continue;
		}
		if(c == '\n'){
			++nc;
		}
	}
	printf("space count: %d, tab count: %d, newline count: %d\n", sc, tc, nc);
	return 0;
}

