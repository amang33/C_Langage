#include <stdio.h>

int main(void) {
//	비트연산자 0은 양수 1은 음수 
//	& (AND), | (OR), ^ (XOR), ~ (결과반전, 1=0 , 0 = 1로 대입), << (비트 열을 왼쪽으로 이동), >> (비트 열을 오른쪽으로 이동)
//	변수에 값이 대입되지 않음 
//	비트는 2진법으로 사용, 1바이트는 8비트가 1바이트로 저장됨 
//	비트 연산자는 속도가 훨씬 빠르다. 

//	======================================================
 
//	int num1;

//	printf("정수 입력 : ");
//	scanf("%d", &num1);

////	~num1; 로 하면 이 당시만 변환될 뿐 저장되지는 않음. 

////	1의 보수법 (양수는 음수 음수는 양수로 변환) 
//	num1 = ~num1; 
////	2의 보수법 (1의 보수법에 1을 추가함) 
//	num1++;

//	printf("부호 바꾼 결과 : %d", num1);
	
//	======================================================
	
//	int num1;

//	printf("정수 입력 : ");
//	scanf("%d", &num1);

////	16배 후 나누기 4 하기 (비트) 

//	num1 = num1 << 4;		//	2 * 2 * 2 * 2
//	num1 = num1 >> 2;		//	2 / 2(2로 나눈 후 다시 2로 나눈다고 생각하면 편함)

//	printf("%d", num1);

//	======================================================

	return 0;
}