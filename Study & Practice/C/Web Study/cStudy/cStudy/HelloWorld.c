#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)	//scanf를 썼을 때 보안상의 이유로 컴파일 거부되는 것을 무시(?)하는 코드. (scanf_s 안써도 됨)
#define MAXNUM 9999

void main() {

	/*
//1. 기본출력(printf)
	printf("This is my first C program\n");
	printf("YeraBee~~~~");

	

//2. 출력(printf)형식
	int num1, num2, num3;
	num1 = 123;
	num2 = 456;
	num3 = num1 + num2;
	printf("%d\n", num3);		//printf(num3); 이렇게 하면 출력 안됨. 왜냐하면 printf라는 함수의 (첫번째)인자타입은 char 기반이기 때문. 형식을 지켜줘야 함.

	//char data = "Hello";
	//printf(data); 근데 이렇게 해도 안된다. 잘은 모르겠지만 정확히는 printf의 인자 타입은, const char * 변수명   이런식으로 해줘야 하는 듯 하다.
	//즉
	const char* data = "Hello";	//이렇게 해줘야 한다.
	printf(data);



//3. 입력 기본(scanf)
	int num;
	
	printf("\n정수 하나 입력해봐 : ");
	scanf_s("%d", &num);		
		//1) _s가 없으면 오류가 남! 정확히는 모르겠지만 일단 '보안'상의 이유 때문이라 함!
		//2) '&' 이거는 num의 '주소'를 지시하는 지시자 임!!
	printf("%d", num);
	
	

	//scanf와 printf 활용하기
	int num1, num2, num3;
	printf("야 하나 입력해봐 : ");
	scanf("%d", &num1);
	printf("다음꺼 입력해 : ");
	scanf("%d", &num2);
	num3 = num1 * num2;
	printf("둘의 곱 = %d", num3);



	//scanf와 printf 활용하기2
	int thisYear, birthYear, age;
	printf("올해가 몇년이냐 : ");
	scanf("%d", &thisYear);
	printf("닌 몇년에 태어났냐 : ");
	scanf("%d", &birthYear);
	age = thisYear - birthYear + 1;
	printf("니 나이는 %d 살 이야", age);
	


	int num1, num2;
	printf("첫 수 입력 : ");
	scanf("%d", &num1);
	printf("두번째 수 입력 : ");
	scanf("%d", &num2);
	if (num1 * 2 == num2 || num2 * 2 == num1) {
		printf("두 수의 합 : %d", num1 + num2);
	}
	else {
		printf("두 수는 두 배 관계가 아님");
	}
	


	//float. %f와 %d의 차이!!
	float distance, speed, time;
	printf("거리를 입력해 : ");
	scanf("%f", &distance);
	printf("속력을 입력해 : ");
	scanf("%f", &speed);
	time = distance / speed;
	printf("시간(f 타입 출력) : %f\n시간(d 타입 출력) : %d", time, time);
	


//for문
	//for문 기본
	int total, k;
	total = 0;
	for (k = 1; k < 11; k++) {
		total = total + k;
		printf("k=%d, total=%d\n", k, total);
	}
	


	//for문, char 입력, enter 처리
	char input;
	while (1) {
		printf("문자를 입력하세요 : ");
		scanf("%c%*c", &input);
		if (input == 'A') {
			printf("Aaaaaaaaaaa");
			break;
		}
		else if (input == 'S') {
			printf("Sssssssssss");
			break;
		}
		else if (input == 'M') {
			printf("Mmmmmmmmmmmm");
			break;
		}
		else if (input == 'R') {
			printf("Rrrrrrrrrrrr");
			break;
		}
		else {
			printf("다른 키를 입력했습니다.\n");
		}
	

	
	//첫 번째 조건식이 만족하지 않을 경우, 두 번째 조건식은 실행되지 않는다!
	int i, sum = 0;
	for(i=1; i==3; i++){
		sum = sum + i;
	}
	printf("%d", sum);
	

	
//배열
	//1차
	int val[1000];
	float val2[MAXNUM];
	double val3[2000];
	


	//for문 배열출력
	float prices[4] = {16.24, 18.98, 23.75, 19.54};
	for (int i = 0; i < 4; i++) {
		printf("%f\n", prices[i]);
	}
	
	

	//배열 메모리 할당 test(연속된 메모리 주소를 부여받음)
	int num[3] = {1,2,3};
	for (int i = 0; i < 3; i++) {
		printf("%d\n", &num[i]);
	}
	


	//1차 - 배열 복사하기
	int num, num1[5], num2[5];
	for (int i = 0; i < 5; i++) {
		printf("숫자 입력 : ");
		scanf("%d", &num);
		num1[i] = num;
	}
	
	for (int i = 0; i < 5; i++) {
		num2[i] = num1[i];
	}

	printf("num1 배열(원본) : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", num1[i]);
	}
	printf("\nnum2 배열(복사본) : ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", num2[i]);
	}
	


	//배열복사방법 2
	char data1[6] = "hello";
	char data2[6];

	strcpy(data2, data1);		//strcpy 사용하려면 맨 위에 #include <string.h>

	for (int i = 0; i < 5; i++) {
		printf("%c", data2[i]);		//또는 printf("%s", data2);   로 해도 됨.
	}
	*/



//포인터
	//포인터의 장점 : 호출된 다른 함수는, 기존 실행문 내의 변수 값에 어떠한 영향을 끼치지 못하도록 하는 것이 원칙이다.
	//그런데 포인터를 이용한다면, 외부함수의 인자로 들어가서, 호출한 부분의 변수를 조작하는 것이 가능하다.
	//그러나 메모리를 조작할 수 있는 부분이기에, 포인터를 사용할 때는 각별한 유의가 필요하다.
	//예제 (포인터를 이용해 원래 변수의 값 바꿔보기)
	int i = 10;
	int* x;
	x = &i;
	printf("변경 전 i의 값 : %d\n", i);
	*x = 20;
	printf("변경 후 i의 값 : %d\n", i);
	
	
}