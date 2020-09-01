#include <stdio.h>
#include <string.h>
#include <math.h>

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
	


//배열과 포인터
//배열은 일종의 포인터 같은 것이라 한다.
//원래 일반 변수의 경우, printf로 변수명을 출력하면, 그 값이 나오지만,
//배열 변수의 경우, printf로 변수명을 출력하면, 그 주소값(index [0]의 주소값)이 나온다.
	int arr[5] = { 0, };
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", *arr, arr, &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	//0, arr[0]의 주소, arr[0]의 주소, arr[1]의 주소, arr[2]의 주소, ..., arr[4]의 주소		가 출력됨.



//구조체 : java 등의 객체지향프로그래밍 언어에서 class의 전신으로 보면 됨.
//			배열이 같은 데이터타입의 집합이라 한다면, 구조체는 그를 포함하여, 다른 데이터타입의 집합이라 할 수 있음.
	//구조체 기본 예시

	struct myInfo {		//구조체 정의
		char name[10];
		int age;
		short height;
		short weight;
	};
	
	struct myInfo horingring;
	strcpy(horingring.name,"홍길동");
	horingring.age = 25;
	horingring.height = 180;
	horingring.weight = 70;

	printf("이름 : %s\n", horingring.name);
	printf("나이 : %d\n", horingring.age);
	printf("키 : %d\n", horingring.height);
	printf("몸무게 : %d\n", horingring.weight);
	


	//두 지점 사이 거리 구하기
	struct point {
		int x;
		int y;
	};

	struct point p1, p2;
	printf("p1의 좌표를 입력하세요 : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p1의 좌표 : %d, %d\n", p1.x, p1.y);
	printf("p2의 좌표를 입력하세요 : ");
	scanf("%d %d", &p2.x, &p2.y);
	printf("p2의 좌표 : %d, %d\n", p2.x, p2.y);

	int subtractX = p1.x - p2.x;
	int subtractY = p1.y - p2.y;
	double distinct = sqrt(subtractX*subtractX+subtractY*subtractY);

	printf("두 지점 사이의 거리 : %lf\n", distinct);
	
	

	//구조체 간의 비교 예시( -> 직접적인 비교는 불가능)
	struct point2 {
		int x;
		int y;
	};

	struct point2 p11, p22;
	p11.x = 10;
	p11.y = 20;

	p22.x = 10;
	p22.y = 20;


		//	if (p11 == p22) {
		//		printf("p11과 p22는 같습니다");
		//	}
		//위의 비교문은 적절하지 않다. struct 변수 자체의 비교는 불가능하다.
		//따라서 그 내용을 통해 비교하여야 한다.
	if ((p11.x == p22.x) && (p11.y == p22.y)) {
		printf("p11과 p22는 같습니다");
	}
	


	//정보처리기능사 실기 대비 공부
	//switch문에 break가 없을 때
	switch (2) {
		case 3:printf("1");
		case 2:printf("2");
		case 1:printf("3");
	}
	


	int sum = 0;
	for (int i = 1; i <= 10; ++i) {
		sum += i;
	}

	//for (int i = 1; i <= 10; i++) {
	//	sum += i;
	//}								//for문에서 ++i와 i++의 결과가 같더라..?? 원래 항상 마지막에 실행되는 건가?

	printf("%d",sum);
	


	//포인터와 배열 타입에 따른 +i값 실적용
	int a[5];
	int i;
	int* p;
	for (i = 0; i < 5; i++) {
		a[i] = i + 10;
	}
	p = a;
	for (i = 0; i < 5; i++) {
		printf("%d ", (p + i));
	}
	


	//%s의 출력형식
	char* str;
	str = "KOREA";
	printf("%8.3s", str);
	*/

	//자리수 test (%3d 와 같은 것)
	int a = 3;
	printf("%3d", a);
}