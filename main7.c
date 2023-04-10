#include <stdio.h>

int main(void) {
////	============================== if문==============================
////	===============1===============
	
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//	
//	if (num1 > num2) {
//		printf("연산 결과 : %d\n", num1 - num2);
//	}
//	
//	if (num1 < num2) {
//		printf("연산 결과 : %d\n", num2 - num1);
//	} 
//	
//	if (num1 > num2) {
//		printf("연산 결과 : %d\n", num1 - num2);
//	} else {
//		printf("연산 결과 : %d\n", num2 - num1);
//	}

////	============================== else if문==============================
////	===============2===============

//	int kor, eng, mat;
//	double ave;
//	
//	printf("국어, 영어, 수학 점수 입력 : ");
//	scanf("%d %d %d", &kor, &eng, &mat);
//	
//	ave = (kor + eng + mat) / 3.0;
//	
////	ave = (double)(kor + eng + mat) / 3;
//	
//	printf("평균 : %lf\n", ave);
//	
////	if (ave >= 90) {
////		printf("학점 : A");
////	} else if (ave >= 80) {
////		printf("학점 : B");
////	} else if (ave >= 70) {
////		printf("학점 : C");
////	} else if (ave >= 60) {
////		printf("학점 : D");
////	} else {
////			printf("학점 : F");
////	}
//	
//	if (ave >= 90)
//		printf("학점 : A");
//	else if (ave >= 80)
//		printf("학점 : B");
//	else if (ave >= 70)
//		printf("학점 : C");
//	else if (ave >= 60)
//		printf("학점 : D");
//	else
//		printf("학점 : F");

////	============================== 3항연산자==============================
////	===============3===============

//	int num1, num2, sum;
//	
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//	
//	sum = (num1 > num2) ? (num1 - num2) : (num2 - num1);
//	
//	printf("연산 결과 : %d", sum);

////	============================== continue, break ==============================
////	===============4===============

//	int i;
//	
//	for (i=1; i <=100; i++) {
//		if (i % 2 == 0)
//			continue;
//			
//		printf("%d ", i);
//	}

////	===============5===============

//	int dan, i;
//	
//	for (dan=1; dan <= 9; dan++) {
//		if(dan % 2 == 1)
//			continue;
//		
//		for (i = 1; i <= 9; i++) {
//			if(dan < i)
//				break;
//				
//			printf("%d * %d = %d\n", dan, i, dan * i);
//		}
//		
//		printf("\n");
//	}

////	===============6===============

//	int a, z;
//	
//	for (a = 0; a <= 9; a++){
//		for (z = 0; z <= 99; z++) {
//			if (10 * a + z + 10 * z + a != 99)
//				continue;
//			
//			printf("%d%d + %d%d = 99\n", a, z, z, a);
//		}
//	}
	
////	============================== switch ==============================
////	===============7===============

	int num;
	
	printf("1부터 3까지의 정수 중 하나 입력 : ");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			printf("1은 one");
			break;
		case 2:
			printf("2은 two");
			break;
		case 3:
			printf("3은 three");
			break;
		default:
			printf("I don't know!");
	}
	
	return 0;
}
