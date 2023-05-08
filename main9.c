#include <stdio.h>

//	============== 2 ==============

//int power(int m, int k) {
//	int i, p = 1;
//	
//	for(i=0; i < k; i++) {
//		p *= m;
//	}
//	
//	return p;
//}

//	============== 2 ==============

//int power2(int m, int k) {
////	m ^ k = m * m(k-1)
////	m ^ k = m * power2(m, k-1)
//	
//	return (k == 0) ? 1 : m * power2(m, k-1);
//}

void printCharsReverse(char * str) 
{
    if (*str== '\0')
        return;
    else 
    {
        printCharsReverse(str+1);
        printf("%c", *str);  // %c 로 받으므로 한글자만 출력. *str 즉 첫번째 문자 
    }   
}


int main() {
//	============== 1 ==============
//	int m = 2, k, c;
//	
//	for(k = 0; k <= 9; k++) {
//		c = power(m, k);
//		
//		printf("%d ^ %d = %d \n", m, k, c);
//	}
	
//	============== 2 ==============
//	재귀함수 (위와 동일한 값)

//	int m = 2, k, c;
//	
//	for(k = 0; k <= 9; k++) {
//		c = power2(m, k);
//		
//		printf("%d ^ %d = %d \n", m, k, c);
//	}

	printCharsReverse("abcdefg");
	 
	return 0;
}
