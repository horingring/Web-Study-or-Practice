#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)	//scanf�� ���� �� ���Ȼ��� ������ ������ �źεǴ� ���� ����(?)�ϴ� �ڵ�. (scanf_s �Ƚᵵ ��)
#define MAXNUM 9999

void main() {

	/*
//1. �⺻���(printf)
	printf("This is my first C program\n");
	printf("YeraBee~~~~");

	

//2. ���(printf)����
	int num1, num2, num3;
	num1 = 123;
	num2 = 456;
	num3 = num1 + num2;
	printf("%d\n", num3);		//printf(num3); �̷��� �ϸ� ��� �ȵ�. �ֳ��ϸ� printf��� �Լ��� (ù��°)����Ÿ���� char ����̱� ����. ������ ������� ��.

	//char data = "Hello";
	//printf(data); �ٵ� �̷��� �ص� �ȵȴ�. ���� �𸣰����� ��Ȯ���� printf�� ���� Ÿ����, const char * ������   �̷������� ����� �ϴ� �� �ϴ�.
	//��
	const char* data = "Hello";	//�̷��� ����� �Ѵ�.
	printf(data);



//3. �Է� �⺻(scanf)
	int num;
	
	printf("\n���� �ϳ� �Է��غ� : ");
	scanf_s("%d", &num);		
		//1) _s�� ������ ������ ��! ��Ȯ���� �𸣰����� �ϴ� '����'���� ���� �����̶� ��!
		//2) '&' �̰Ŵ� num�� '�ּ�'�� �����ϴ� ������ ��!!
	printf("%d", num);
	
	

	//scanf�� printf Ȱ���ϱ�
	int num1, num2, num3;
	printf("�� �ϳ� �Է��غ� : ");
	scanf("%d", &num1);
	printf("������ �Է��� : ");
	scanf("%d", &num2);
	num3 = num1 * num2;
	printf("���� �� = %d", num3);



	//scanf�� printf Ȱ���ϱ�2
	int thisYear, birthYear, age;
	printf("���ذ� ����̳� : ");
	scanf("%d", &thisYear);
	printf("�� ��⿡ �¾�� : ");
	scanf("%d", &birthYear);
	age = thisYear - birthYear + 1;
	printf("�� ���̴� %d �� �̾�", age);
	


	int num1, num2;
	printf("ù �� �Է� : ");
	scanf("%d", &num1);
	printf("�ι�° �� �Է� : ");
	scanf("%d", &num2);
	if (num1 * 2 == num2 || num2 * 2 == num1) {
		printf("�� ���� �� : %d", num1 + num2);
	}
	else {
		printf("�� ���� �� �� ���谡 �ƴ�");
	}
	


	//float. %f�� %d�� ����!!
	float distance, speed, time;
	printf("�Ÿ��� �Է��� : ");
	scanf("%f", &distance);
	printf("�ӷ��� �Է��� : ");
	scanf("%f", &speed);
	time = distance / speed;
	printf("�ð�(f Ÿ�� ���) : %f\n�ð�(d Ÿ�� ���) : %d", time, time);
	


//for��
	//for�� �⺻
	int total, k;
	total = 0;
	for (k = 1; k < 11; k++) {
		total = total + k;
		printf("k=%d, total=%d\n", k, total);
	}
	


	//for��, char �Է�, enter ó��
	char input;
	while (1) {
		printf("���ڸ� �Է��ϼ��� : ");
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
			printf("�ٸ� Ű�� �Է��߽��ϴ�.\n");
		}
	

	
	//ù ��° ���ǽ��� �������� ���� ���, �� ��° ���ǽ��� ������� �ʴ´�!
	int i, sum = 0;
	for(i=1; i==3; i++){
		sum = sum + i;
	}
	printf("%d", sum);
	

	
//�迭
	//1��
	int val[1000];
	float val2[MAXNUM];
	double val3[2000];
	


	//for�� �迭���
	float prices[4] = {16.24, 18.98, 23.75, 19.54};
	for (int i = 0; i < 4; i++) {
		printf("%f\n", prices[i]);
	}
	
	

	//�迭 �޸� �Ҵ� test(���ӵ� �޸� �ּҸ� �ο�����)
	int num[3] = {1,2,3};
	for (int i = 0; i < 3; i++) {
		printf("%d\n", &num[i]);
	}
	


	//1�� - �迭 �����ϱ�
	int num, num1[5], num2[5];
	for (int i = 0; i < 5; i++) {
		printf("���� �Է� : ");
		scanf("%d", &num);
		num1[i] = num;
	}
	
	for (int i = 0; i < 5; i++) {
		num2[i] = num1[i];
	}

	printf("num1 �迭(����) : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", num1[i]);
	}
	printf("\nnum2 �迭(���纻) : ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", num2[i]);
	}
	


	//�迭������ 2
	char data1[6] = "hello";
	char data2[6];

	strcpy(data2, data1);		//strcpy ����Ϸ��� �� ���� #include <string.h>

	for (int i = 0; i < 5; i++) {
		printf("%c", data2[i]);		//�Ǵ� printf("%s", data2);   �� �ص� ��.
	}
	*/



//������
	//�������� ���� : ȣ��� �ٸ� �Լ���, ���� ���๮ ���� ���� ���� ��� ������ ��ġ�� ���ϵ��� �ϴ� ���� ��Ģ�̴�.
	//�׷��� �����͸� �̿��Ѵٸ�, �ܺ��Լ��� ���ڷ� ����, ȣ���� �κ��� ������ �����ϴ� ���� �����ϴ�.
	//�׷��� �޸𸮸� ������ �� �ִ� �κ��̱⿡, �����͸� ����� ���� ������ ���ǰ� �ʿ��ϴ�.
	//���� (�����͸� �̿��� ���� ������ �� �ٲ㺸��)
	int i = 10;
	int* x;
	x = &i;
	printf("���� �� i�� �� : %d\n", i);
	*x = 20;
	printf("���� �� i�� �� : %d\n", i);
	
	
}