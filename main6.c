#include <stdio.h>

int main(void) {
//	반복문 내부 한 줄일 경우 {중괄호}를 생략 가능 
////	============================== while문==============================
////	===============1===============
//
//	int i=0, j=0;
//	
//	while(i < 3){
//		printf("i=%d, j=%d\n", i, j);
//		
//		while(j < 2){
//			j++;
//			printf("i=%d, j=%d\n", i, j);
//		}
//		
//		i++;
//		j=0;
//	}
//
////	===============2===============
////	입력받은 정수의 값 더하기 0 입력시 종료 
//
//	int sum = 0, num = 1;
//	
//	while(num != 0) {
//		printf("정수 입력 (0 to quit): ");
//		scanf("%d", &num);
//		
//		sum += num;
//	} 
//	
//	printf("입력 받은 정수의 합 : %d \n", sum);

////	===============3===============

//	int i = 9, dan = 5;
//	
//	printf("구구단 %d단 역순 출력\n", dan);
//	
//	while(i > 0) {
//		printf("%d * %d = %2d\n", dan, i, dan * i);
//		
//		i--;
//	}

////	===============4===============

//	int i = 9, dan;
//	
//	printf("정수 입력 : ");
//	scanf("%d", &dan);
//	
//	while(i > 0) {
//		printf("%d * %d = %2d\n", dan, i, dan * i);
//		
//		i--;
//	}

////	===============5===============
////	이중 while문 (구구단 역순)
	
//	int i = 9, dan = 9;
//	
//	while(i > 0) {
//		dan = 9;
//		printf("===%d===\n", i);
//		while(dan > 1) {
//			printf("%d * %d = %2d\n", i, dan, i * dan);
//			dan--;
//		} 
//		i--;
//	}

////	===============6===============

//	int input, sum, num, num1;
//	
//	printf("입력 받을 정수의 갯수 : ");
//	scanf("%d", &num);
//	
//	num1 = num;
//	
//	while (num > 0) {
//		printf("정수 입력 : ");
//		scanf("%d", &input);
//		
//		sum += input; 
//		
//		num--;
//	}
//	
////	printf("입력값 평균 : %lf", (double)sum / num1);
//	printf("입력값 평균 : %.2lf", (double)sum / num1);

////	===============7===============
//
//	int num, i = 2;
//	
//	printf("양의 정수 입력 : ");
//	scanf("%d", &num);
//	
//	printf("입력받은 정수 %d 보다 작은 짝수 : ", num);
//	
//	while(i < num){
//		printf("%d ", i);
//		i += 2;
//	}

////	==============================do while문==============================
////	===============1===============

//	int dan = 9, i;
//	
//	do{
//		i = 9;
//		printf("===%d===\n", dan);
//		
//		do {
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			
//			i--;
//		} while(i > 0);
//		
//		dan--;
//	} while(dan > 1);

////	===============2===============
////	100보다 작은 홀수 전부 더하기 

//	int sum, i;
//	
//	do{
//		sum	+= i;
//		i 	+= 2;
//	} while(i < 100);
//	
//	printf("%d\n", sum);

////	============================== for문==============================
////	===============1===============

//	int dan, i;
//	
//	for(dan = 1; dan < 10; dan++) {
//		for(i = 1; i < 10; i++) {
//			printf("%d * %d = %d\n", dan, i, dan*i);
//		}
//		
//		printf("\n");
//	}

////	===============2===============

	int result = 1, num, i;
	
	printf("정수 입력 : ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		result *= i;		// result = result * i;
	}
	
	printf("%d! = %d \n", num, result);

	return 0;
}
