#include <stdio.h>

//	================= 1 =================

//int MaxNum(int n1, int n2, int n3) {
//	if(n1 > n2) {
//		return (n1 > n3) ? n1 : n3;
//	} else {
//		return (n2 > n3) ? n2 : n3;
//	}
//}
//
//int MinNum(int n1, int n2, int n3) {
//	if(n1 > n2) {
//		return (n2 < n3) ? n2 : n3;
//	} else {
//		return (n1 < n3) ? n1 : n3;
//	}
//}

//	================= 2 =================

//double CelToFah(double c) {
//	return 1.8 * c + 32;
//}
//
//double FahToCel(double f) {
//	return (f - 32) / 1.8;
//}

//	================= 3 =================

void fibo(int num) {
	int f1 = 0 ,f2 = 1, f3, i;
	
	printf("%d %d", f1, f2);
	
	for(i = 3; i <= num; i++) {
		f3 = f1 + f2;
	
		printf(" %d", f3);
		
		f1 = f2;
		f2 = f3;
	}
	
}

int main() {
	
//	================= 1 =================
	
//	int num1, num2, num3;
//	
//	printf("세 개의 정수 입력 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	
//	printf("가장 큰 수 : %d \n", MaxNum(num1, num2, num3));
//	printf("가장 작은 수 : %d \n", MinNum(num1, num2, num3));

//	================= 2 =================
//	섭씨를 화씨로 화씨를 섭씨로 

//	int sel;
//	double num;
//	
//	printf("1. 섭씨 => 화씨, 2. 화씨 => 섭씨 \n");
//	printf("선택 : ");
//	scanf("%d", &sel);
//	
//	if(sel == 1) {
//		printf("섭씨를 입력하세요 : ");
//		scanf("%lf", &num);
//		printf("변환된 화씨는 : %.2lf \n", CelToFah(num));
//	} else {
//		printf("화씨를 입력하세요 : ");
//		scanf("%lf", &num);
//		printf("변환된 섭씨는 : %lf \n", FahToCel(num));
//	}
	
//	================= 3 =================
//	피보나치 수열을 출력하기 ex) 0 1 1 2 3 5 8 13 ~~~

	int n;
	
	printf("출력하고자 하는 피보나치 수열 갯수 : ");
	scanf("%d", &n);
	
	if(n < 0) {
		printf("양수를 입력해 주세요");
		return -1;
	}
	
	fibo(n);


	return 0;
}
