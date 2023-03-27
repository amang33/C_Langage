#include <stdio.h>

int main(void) {
//	======================== 1 ========================

//	char ch 		= 7;
//	int num 		= 1000;
//	double d_num	= 3.14;
//	char num1 = 3, num2 = 5, result1;
//	short num3 = 300, num4 = 400, result2;
//	
//	printf("%d \n", sizeof(ch));
//	printf("%d \n", sizeof(num));
//	printf("%d \n", sizeof(d_num));
//	printf("%d \n", sizeof(short));
//	
//	printf("\n\n\n");
//	
//	printf("%d \n", sizeof(num1 + num2));
//	printf("%d \n", sizeof(num3 + num4));
//	
//	printf("\n\n\n");
//	
//	result1 = num1 + num2;
//	result2 = num3 + num4;
//	
//	printf("%d %d", sizeof(result1), sizeof(result2));

//	======================== 2 ========================

//	double rad, area;
//	
//	printf("원의 반지름 넓이 : ");
//	scanf("%lf", &rad);
//	
//	area = rad * rad * 3.14;
//	
//	printf("원의 넓이 : %lf \n", area);

//	======================== 3 ========================
	
//	int i = 2147483647;

//// overflow
//	printf("%d %d %d \n", i, i+1, i+2); 

//	======================== 4 ========================

//	float num1 = 3.14;
//	float num2 = 3.14f;
//	float num3 = 3.14F + 4.32F;
	
//	======================== 5 ========================

//	C에서는 상수를 사용할때 변수명을 보통 대문자로 사용함
//	const = 상수 (값 변경 불가)  
//	const int MAX = 10; 		// MAX는 상수. 값 변경 불가 
//	const double PI = 3.14;		// 위와 동일. 
//	
//	const int MIN;				// 쓰레기값으로 초기화됨 
//	MIN = 0;					// 값 변경 불가 에러발생 

//	======================== 6 ========================

//	int num;
//	
//	printf("정수 입력 : ");
//	scanf ("%d", &num);
//	
//	printf("결과 출력 : %c \n", num);		// %c 서식문자는 아스키코드표 상의 값을 받음. 
//	printf("결과 출력 : %d", num);

//	======================== 7 ========================

//	int num;
//	
//	printf("아스키코드 문자 입력 : ");
//	scanf("%c", &num);
//	
//	printf("결과 출력 : %c \n", num);		// %c 서식문자는 아스키코드표 상의 값을 받음. 
//	printf("결과 출력 : %d", num);

//	======================== 8 ========================

//	double num1 = 100;
//	int num2 = 3.14;
//	int num3 = 129;
//	char ch = num3;
//	
//	printf("%lf \n", num1);		// 100.00000000
//	printf("%d \n", num2);		// 3
//	printf("%d \n", num3);		// 129
//	printf("%d \n", ch);		// -127

//	======================== 9 ========================

//	int num1 = 3, num2 = 4;
//	double divResult1, divResult2;
//	
//	divResult1 = num1 / num2;
//	divResult2 = (double)num1 / num2;	// 형변환 
//	
//	printf("%f \n", divResult1);
//	printf("%f \n", divResult2);

//	======================== 10 ========================
	
//	int a = (2 + 3)*6;
//	int b = (12 + 6) / 2 * 3;
//	int c = (2 + 3) / 4;
//	int d = 3 + 2 * (7/2);
//	int e = (int) 3.8 + 3.3;
//	
//	printf("%d \n", a);		// 30
//	printf("%d \n", b);		// 27
//	printf("%d \n", c);		// 1
//	printf("%d \n", d);		// 9
//	printf("%d \n", e);		// 6

//	======================== 11 ========================
	
//	float num1, num2;
//	
//	num1 = 10 / 3;
//	num2 = (float) 10 / 3;
//	
//	printf("%f \n", num1);
//	printf("%f \n", num2);
	
//	======================== 12 ========================

//	printf("%f \n", 0.0123);
//	printf("%e \n", 0.0123);
//	printf("%f \n", 0.0123456);
//	printf("%e \n", 0.0123456);

	return 0;
}
