#include <stdio.h>
#include <string.h>

int main(void) {
//	=== 1 ===
//	영어 단어를 하나 입력 받아서, 회문인지 아닌지 체크 

	char a[30];
	int i, j, len;
	
	scanf("%s", a);
	
	len = strlen(a);
	
//	for (i=0; i < (len/2); i++) {
//		if(a[i] == a[(len-1 - i)]) {
//			continue;
//		}
//		
//		printf("회문 아님");
//		return 0;
//	}

	for (i=0, j = len-1; i<j; i++, j--) {
		if(a[i] == a[j]) {
			continue;
		}
	}
	
	printf("회문");
	
	return 0;
}
