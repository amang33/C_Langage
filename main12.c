#include <stdio.h>

//================== 2함수 ==================
//void ShowArayElem(int *, int);

//	================== 3함수 ==================
//int cbv(int );
//void cbr(int * );
//	================== 4함수 ==================
void swap(int * , int * , int * );

int main() {
//	================== 1함수 ==================
//	int arr[3] = {1, 2, 3};
	
//	SimpleFunc(arr);

//	================== 2함수 ==================
//	int arr1[3] = {1, 2, 3};
//	int arr2[5] = {4, 5, 6, 7, 8};
//	
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

//	================== 3함수 ==================
//	- 변수 num에 10을 저장하고, 저장된 값의 제곱을 계산하는 함수를 정의
//	하고, 이를 호출하는 main 함수를 작성해보자.
//	- 단, 여기서 call-by-value와 call-by-referenc를 각각 사용하는 2개의 함수를
//	정의하자.

//	int num = 10;
//	int result;
//	
//	result = cbv(num);
	
//	printf("%d \n", result);
//	call-by-value
//	printf("%d \n", cbv(num));
//	printf("%d \n", num);
//	call-by-reference
//	cbr(&num);
//	
//	printf("%d \n", num);
	
//	================== 4함수 ==================
//	- 세 변수에 저장된 값을 서로 바꾸는 함수를 정의하자.
//	- 함수의 호출 형태는 Swap (&num1, &num2, &num3);

	int num1=10, num2=20, num3=30;
	
	printf("%d %d %d \n", num1, num2, num3);
	
	swap(&num1, &num2, &num3);
	
	printf("%d %d %d \n", num1, num2, num3);
	
	return 0;
}

//================== 1함수 ==================
//두 파라미터 선언 방식은 동일함 
//void SimpleFunc(int param[])
//void SimpleFunc(int * param) {
//	printf("%d %d", param[0], param[1]);
//}

//================== 2함수 ==================

//void ShowArayElem(int * param, int len) {
//	int i;
//	
//	for (i = 0; i < len; i++) {
//		printf("%d ", param[i]);
//	}
//	
//	printf("\n");
//}

//	================== 3함수 ==================
//int cbv(int n) {
//	return n*n;
//}
//
////int * ptr = &num;
//void cbr(int * ptr) {
//	*ptr = *ptr * *ptr;
//}

//	================== 4함수 ==================
void swap(int * p1, int * p2, int * p3) {
	int temp;
	
	temp = *p1;
	
	*p1 = *p3;
	*p3 = *p2;
	*p2 = temp;
}
