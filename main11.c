#include <stdio.h>

int main(void) {
//	=================== 포인터 ===================

//	변수의 주소값을 저장해줌
//	메모리 공간을 참조하는 방법의 힌트가 됨
//	다양한 포인터 형을 정의한 이유는 *연산을 통한 메모리 접근 기준을 마련하기 위함
//	int형 포인터 변수 접근시 4바이트 메모리 공간에 정수의 형태로 데이터를 읽고 씀
//	double형 포인터 변수 접근시 8바이트 메모리 공간에 실수의 형태로 데이터를 읽고 씀
//	주소값이 정수임에도 불구하고 4바이트에 8바이트의 모든 정보를 담을 수 없어 형이 여러개임  

// 	=================== ex) ===================

//	int *ptr;
//	*ptr = 100;		ptr이 쓰레기 값으로 초기화 됨 위험한 코드 

//	int *ptr = 100;
//	*ptr = 10; 		좋지 않은 코드. 

//	잘못된 포인터 연산을 막기 위해 특정한 값으로 초기화하지 않는 경우에 null 포인터로 초기화
//	null = 0을 의미함. 
//	int *ptr = 0;
//	int *ptr2 = null;

// 	=================== 1 =================== 

//	int num = 5;
//	int *pnum = &num;
//	*pnum = 10;
//	
//	printf("%d \n", num);
//	printf("%d", *pnum);

//	=================== 2 ===================

//	int num1 = 100, num2 = 100;
//	int *pnum;
//	
//	pnum = &num1;
//	(*pnum) += 30;
//	
//	pnum = &num2;
//	(*pnum) -= 30;
//	
//	printf("num1 : %d, num2 : %d", num1, num2);

//	=================== 3 ===================
//	출력 결과를 예측하시오.
	
//	int num = 10;
//	int *ptr1 = &num;
//	int *ptr2 = ptr1;
////	int *ptr2 = &num; 과 동일한 표현. 
//	
//	(*ptr1)++;		// num++;과 같음 
//	(*ptr2)++;		// num++;과 동일
//	
//	printf("%d", num); 

//	=================== 4 ===================
//	- int 형 변수 num1과 num2를 선언함과 동시에 각각 10, 20으로 초기화하고,
//	int 형 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1, num2를 가리키게
//	하자.
//	- 그 다음 ptr1과 ptr2를 이용해서 num1의 값을 10 증가시키고, num2의 값
//	을 10 감소시키자.
//	- 그리고 그 다음 두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸고,
//	ptr1과 ptr2가 가리키는 변수에 저장된 값을 출력하는 프로그램을 작성해보
//	자.

//	int num1 = 10, num2 = 20;
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	int *temp = 0;
//	
//	printf("ptr1 : %d, ptr2 : %d \n", *ptr1, *ptr2);
//	
//	(*ptr1) += 10;
//	(*ptr2) -= 10;
//	
//	printf("ptr1 : %d, ptr2 : %d \n", *ptr1, *ptr2);
//	
////	가능함. 
////	ptr1 = &num2;
////	ptr2 = &num1; 
//
//	temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//	
//	printf("ptr1 : %d, ptr2 : %d", *ptr1, *ptr2);

//	=================== 5 ===================
//	길이가 5인 int 형 배열 arr을 선언하고 이를 {1, 2, 3, 4, 5}로 초기화한 다음,
//	이 배열의 첫 번째 요소를 가리키는 포인터 변수 ptr를 선언하자.
//	- 그 다음 포인터 변수 ptr에 저장된 값을 증가시키는 연산을 통해 모든 요소의
//	값을 2씩 증가시키고, 이 값을 출력하는 예제를 작성하는 프로그램을 작성해
//	보자.

//	int arr[5] = {1, 2, 3, 4, 5};
//	
////	int *ptr = arr;과 동일함
//	int *ptr = &arr[0]; 
//	int i;
//	
////	*ptr += 2;
////	ptr++;
//////	3, 2, 3, 4, 5
////
////	*ptr += 2;
////	ptr++;
//////	3, 4, 3, 4, 5
////	
////	*ptr += 2;
////	ptr++;
//////	3, 4, 5, 4, 5
////	
////	*ptr += 2;
////	ptr++;
//////	3, 4, 5, 6, 5
////
////	*ptr += 2;
////	ptr++;
//////	3, 4, 5, 6, 7
//
//	for (i = 0; i < 5; i++) {
//		*ptr += 2;
//		ptr++;
//		
//		printf("%d \n", arr[i]);
//	}

//	=================== 6 ===================
//	실습 11.3과 동일한 문제이나, 포인터 변수 ptr에 저장된 값을 변경하지 말고,
//	ptr을 대상으로 덧셈 연산을 수행하는 프로그램을 작성해보자.

//	int arr[5] = {1, 2, 3, 4, 5};
//	
////	int *ptr = arr;과 동일함
//	int *ptr = &arr[0]; 
//	int i;
//	
//	for (i = 0; i < 5; i++) {
//		*(ptr + i) += 2;
//		
//		printf("%d \n", arr[i]);
//	}

//	=================== 7 ===================
//	길이가 5인 int 형 배열 arr을 선언하고 이를 {1, 2, 3, 4, 5}로 초기화한 다음,
//	이 배열의 마지막 요소를 가리키는 포인터 변수 ptr를 선언하자.
//	- 그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 연산을 통해 모든 배열요
//	소에 접근하여, 배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로
//	그램을 작성해보자.

//	int arr[5] = {1, 2, 3, 4, 5};
//	int *ptr = &arr[4];
//	int i, total = 0;
//	
//	for (i = 0; i < 5; i++) {
//		total += *ptr;
//		ptr--;
//		
////		printf("%d \n", total);
//	}
//	
//	printf("%d", total);

//	=================== 8 ===================
//	길이가 6인 int 형 배열 arr을 선언하고 이를 {1, 2, 3, 4, 5, 6}으로 초기화한
//	다음, 배열에 저장된 값의 순서가 {6, 5, 4, 3, 2, 1}이 되도록 변경하는 프로
//	그램을 작성해보자.
//	- 단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여
//	저장된 값의 순서를 변경하자

	int arr[6] = {1, 2, 3, 4, 5, 6};
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int temp, i;
	
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	
//	ptr1++;
//	ptr2--;
//	
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	
//	ptr1++;
//	ptr2--;
//	
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//	
	for (i = 0; i < 3; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		
		ptr1++;
		ptr2--;
	}
	
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}