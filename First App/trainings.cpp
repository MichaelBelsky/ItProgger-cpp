#include <string>
#include <iostream>
#include <string>
#include <time.h>
#include "arraysMinimal.h"
#include "arraysMinimal.inl"

using namespace std;

void Lesson_28();

void Variables1(); 
void Variables2();
void Variables3();
void Variables4();
void Variables5();
void Variables6();
void Variables7();
void Variables8();
void Variables9();
void Variables10();
void Variables11();

void Conditions1();
void Conditions2();
void Conditions3();
void Conditions4();
void Conditions5();
void Conditions6();
void Conditions7();
void Conditions8();
void Conditions9();
void Conditions10();

void array1();
void array2();
void array3();
void array4();
void array5();
void array6();
void array7();
void array8();
void array9();
void array10();

void RunTraining() {
// 	Numbers();

//	Variables10();		//	1. C++ - ����������

//	Conditions10();		//	2. C++ - �������� ���������

	array5();			//	3. C++ - ������ � ��������
};

//int ar[] = { 728, 3, 402, -1 };
//  ������� ������ ��������� �������. ��� ����� ���������� �� ������ � ������
//  �������� ���� ������� (� ������ ������, int). ��� ��� ��������, ��� � ������
//  ��� �������� ������� ����������� ��������������� ���� �� ������.
//*/
//for (int i = 0; i <= 3; i++) {
//	printf("%d ", &ar[i]);
//}

//				C++ - ����������

//	������ � �������
void Variables1() {
	//	2642 ��� �������� � ����������.���������� ���������� ���, ������, ����.

	//	���� - 2642
	//	����� ����� ���������
	//	"���: 7, ������: 12, ����: 3"
	int days = 2642, weeks, years;

	years = days / 365;

	weeks = (days % (years*365))/7;

	days = days % (years * 365 + weeks * 7);

	cout <<"���: "<< years <<", ������: "<< weeks << ", ����:" << days << endl;
};

//	������ � �����������
void Variables2() {
	//	��������� ������������ ������ ���, � ����� �������.
	//	�������� ���������� ������ � ������� : �������, ���!���� ��� ������һ.
	//	���������: ��� ����� �������� � ���������� � ����� ������ string.

	string name ="Michael";
	int age = 37;
	cout << "������, " << name << "! ���� ���: " << age << endl;
};

//	���������� ����� �� �������
void Variables3() {
//	�������� ���������, ������� ����� �������� �� ������������ ����� � 4 �������.
//	���������� ���������� ����� ����� �� ��������� �����.
//	������:
//	����� 5934
//	��������� 5, 9, 3, 4
//	�����: ����� ������ ������������ � ����������.

int income, first, second, third, fourth ;

cout << "������� ������������� �����:" << endl;
cin >> income;

if (income < 10000 && income >= 1000) {

	//// ��������� � �������� ������ �����
	//int n1 = income / 1000 ;
	//// ��������� � �������� ������ �����
	//int n2 = income / 100 % 10;
	//// ��������� � �������� ������ �����
	//int n3 = income / 10 % 10;
	//// ��������� � �������� ��������� �����
	//int n4 = income % 10;
	//cout << n1 << ", " << n2 << ", " << n3 << ", " << n4;

	string str = to_string(income);
	cout << str[0] << ", " << str[1] << ", " << str[2] << ", " << str[3] << endl;

}
else {
	cout << "�� ����� �� ������������� �����" << endl;
};



};

//	������� ����������
void Variables4() {
	//	�������� ���������� �� ���������� : 5, F, ������, 90.2.
	//	�������� ����������, ������� ������ ����� �������� � ���������� �� �������� 67.
	//	�������� ���������� �� ��������� "������" �� �����.
	int a = 5;
	char b = 'F';
	string c = "������";
	float d = 90.2;
	const int e = 67;
	cout << c << endl;
	};

//	������� ����������
void Variables5() {
	//	�������� ���������� �� ��������� 46 � ���������� �� ��������� "string".�������� �������� ���������� �� 5.
	//	�������� � ������� ��� ����������.
	int a = 46;
	string str = "string";
	cout << a * 5 << " " << str << endl;
};

//	������ ���� ����������
void Variables6() {
	//	�������� ���������� ��� �������� ��������� �������� : -34, 4, 'R', 23.093433, 40000, true, 0.
	//	���������� ���� ������ ��� ����������, ����� ��� ����������� ��������� ��� ������ ��������.
	short a = -34, b = 4;
	char c = 'R';
	float d = 23.093433;
	unsigned short e = 40000;
	bool f = true, g = false;
};

//	������ �� ������������
void Variables7() {
	//	��������� ������������ ������ :
	//	������ ����� �����
	//	�������
	//	����
	//	�������� ��� ��������, ����� �� ���������.
	char name;
	short age;
	short hight;
	
	cout << "������� ������ ����� �����" << endl;
	cin >> name;

	cout << "������� �������" << endl;
	cin >> age;
	
	cout << "������� ����" << endl;
	cin >> hight;

	cout << "������ ����� �����: " << name;
	cout << " �������: " << age;
	cout << " ����: " << hight;
};

//������� ����������
void Variables8() {
	//	��������� ������������ ������ ��� �����.
	//	�������� � ������� �������������� �������� : ����������, ���������, ��������� � ������� ����������.
	int a, b;
	cout << "������� ��� �����" << endl;
	cin >> a >> b;
	cout << "����� �����: " << a + b << endl <<
		"������� �����: " << a - b << endl <<
		"������������ �����:" << a * b << endl << 
		"������� �� �������������� ������� �����:" << a / b << endl;
};

//	��� ������������
void Variables9() {
	//	�������� ���������, ������� ����� �������� ������ �� ������������ : ���, ������� � ��������.����� ���� ����� �������� ������ �� �����.
	//	�������� ������ ���������� ����� ������� getline.
	string name, surname, otchestvo;
	cout << "������� ���� ���: ";
	getline(cin,name);
	cout << "������� ���� �������: ";
	getline(cin, surname);
	cout << "������� ���� ��������: ";
	getline(cin, otchestvo);

	cout << "���: " << name << endl;
	cout << "�������: " << surname << endl;
	cout << "��������: " << otchestvo << endl;
};
//	������������ ����������
void Variables10() {

	//	�������� ���������� � ������������ ���������� ������. ��������� � ��� �������� 5.6 � �� �������� ����������� ������ �� ���������� ������.
	float* val = new float; // new float(5.6) ��� ������������� �����
	*val = 5.6; // ������������� ��� � ������� ����������
	cout << "Variable is " << *val << endl;
	delete val; // ������������� ������
};

void Variables11() {
	//�������������� ��������
	//	��������� ������������ ������ ����� � ������.��������� ��� � ������� � ��������� � ����������� �����.
	float num;
	cout << "�����, ����� ����� � ������, ���" <<endl;
	cin >> num;
	num *= num;
	cout << num << endl;
	cout << round(num)<< endl;
	cout << trunc(num) << endl;
};


//				c++ - �������� ���������

//	��������� �����������
void Conditions1() {
	//	��������� �����������
	//	������������ ����� ��� �����, ����� ���� ��������� ���� :
	//	1. ��������
	//	2. ������
	//	0. ������
	//	� ����������� �� ���� ����� ����� ������ ������������, �� ���������� ���������� ��������.
	float a, b;
	short act;
	cout << "������� ��� �����" << endl;
	cin >> a >> b;

	cout << "1. ��������" << endl
		<< "2. ������" << endl
		<< "0. ������" << endl;
	cin >> act;

	switch (act)
	{
	case 0: cout << "0. ������" << endl;
		break;
	case 1: cout << a + b << endl;
		break;
	case 2: cout << a - b << endl;
		break;

	default:
		break;
	}

};

//	�������� ���������
void Conditions2() {
	//	�������� ����������, � ������� ����� ������ ������� ������������, �������� ��� ���� ��������� ������� �������� :
	//	���� ������� ������ 18 � �� ����� ���������� ����������� : ���� ��� ��� �����;
	//	���� ������� ����� 18 � ����, ��� 18 ���!�;
	//	���� ������ 18 � ��� ��� ������� �������.
	int age=21;
	if (age > 18)
		cout << "��� ��� ��� �����" << endl;
	else if (age == 18)
		cout << "���, ��� 18 ���!" << endl;
	else
		cout << "�� ��� ������� ������" << endl;
};

//	����������� ��� ������
void Conditions3() {
	//	������� ����� �� 1 �� 7, ������� ����� ��������������� ��� ������.
	//	��������: ��� ����� ����� 1 �� ������ ����� ���������� ������������ � �.�.
	//	�������� �������� �������� ��� ������ ���������� switch case
	int DayOfWeek;
	cout << "������� ���� ������" << endl;
	cin >> DayOfWeek;

	switch (DayOfWeek)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "�������" << endl;
		break;
	case 5:
		cout << "�������" << endl;
		break;
	case 6:
		cout << "�������" << endl;
		break;
	case 7:
		cout << "�����������" << endl;
		break;
	default:
		cout << "���-�� �� ��" << endl;
		break;
	}
};

//	������� �������
void Conditions4() {
	//	�������� ���������, ������� ����� ������������ ������ ��������� �������. � ������ �������������� ������ (���������� �������� ��� ��������)
	//	������������ �������, � � ������ �������������� ������ (���������� ������� ��� ���������) ���������� ������.
	//	����� �������� ������������� � ����������.
		//	��������:
	//	����������: ������ - 750 � ������� - 345
	//	��������� ������ ���������:
	//	"���� ������ ���������: 405"
	//	� ������ ������� ����� ���������� �������

	int loses, benefit;
	cin >> loses >> benefit;
	if (loses > benefit)
		cout << "���� ������ ���������: " << loses - benefit << endl;
	else
		cout << "���� ������ ���������: " << benefit - loses << endl;
};

//	����� �����������
void Conditions5(){
	//	�������� ���������, �������, � ����������� �� ���������� ��������(+, -,*, / ) 
	//	����� ���������� �����, �������, ������������ ��� ������� ���� �����, �������� �������������.
		//	��������:
	//	"������ �����: 2"
	//	"��������: -"
	//	"������ �����: 3"
	//	2 - 3 = -1
	//	��� ������� �� ���� ������ ���������� ������!
	float a, b;
	char action;
	cin >> a >> action >> b;
	switch (action)
	{
	case '+': cout << a << " " << action << " " << b << " = " << a+b << endl;
		break;
	case '-': cout << a << " " << action << " " << b << " = " << a - b << endl;
		break;
	case '/': 
		if (b!=0)
			cout << a << " " << action << " " << b << " = " << a / b << endl;
		else
			cout << "������ �� ���� ������" << endl;
		break;
	case '*': cout << a << " " << action << " " << b << " = " << a * b << endl;
		break;
	default: cout << "���-�� �� ��" << endl;
		break;
	}
};

//	��������� �����
void Conditions6() {
	//	�������� ���������, ������� ����� ���������� ���������� �������� � ���� ������������ �������, ��������� �������������.
	string firststring = "", secondstring = "";
	cin >> firststring >> secondstring;
	if (sizeof(firststring) > sizeof(secondstring))
		cout << firststring << " ������ ��� " << secondstring;
	// else if (firststring.length == secondstring.length)
	else if (sizeof(firststring) == sizeof(secondstring))
		cout << firststring << " ����� " << secondstring;
	else
		cout << firststring << " ������ ��� " << secondstring << endl;
};

// ������� ������ �����
void Conditions7() {
	//	�� ���� ����� � ������ ��������� ������� �� ����� ������ �����. a, b - ������ �����.
	int a, b;
	cin >> a >> b;
	
	if (!((a + b) % 2)) //	�������� �� ������ �������� 
		b += 1;			//	���������� - ���������� 1 (������ ��������) �� �������

	if (!(a % 2))
		cout << a;
	else cout << b;
};

//	������� �� ����
void Conditions8() {
	//	�������� ��� ����� �� ������������(num_1 � num_2).
	//	�������� ������ ���������� � ��������� � �� :
	//	����� 1 � ������ ���� num_2 ����� ����
	//	����� ������� num_1 �� num_2
	//	��������� �������� ��� ������ ���������� ���������.

	//if (�������)
	//	x = ��������1;
	//else
	//	x = ��������2;
	//����� �������� ��� :
	//x = (�������) ? ��������1 : ��������2;

	int num_1, num_2;
	cin >> num_1 >> num_2;
	int c = !(num_2) ? 1 : num_1/num_2 ;
	cout << c << endl;
	
};

//	������� �������
void Conditions9() {
	//	�������� ���������� � �� ��������� 8.
	//	�������� �������� if else, ������� ������� �� ����� ����� "��������" � ������ ���� ���������� � ����� ������ �� 27 � �� ����� 21,
	//	�� ��� ���� �� ������ ��� ����� 8.
	//	�������� � ���� ������� ��� �������� : ���� ����� � ����� ������ - 6 ��� 2, �� ������� ����� ����� �����������.
	int A = 8;
	if ((A<27 && A!=21 && A >=8) || (A==6||A==2))
			cout << "��������";
};

//	��������� ��������� �����
void Conditions10(){
	//����� ������� ������ ��������� ����� ��� ���������� ��������� ����� �������� srand, ��� ����������� �����
	// ������������ ������� ����������� ����� � ������� time(0); #include <time.h>
	srand(time(0));
	short int user_num, rand_num;
	rand_num = 1 + rand() % 10;
	cout << rand_num << endl;
};

//	������� ���� � ��������� ������� ������
void Lesson_28() {
		srand(time_t(NULL));
		WorkArrays<int, 10> int_arr;
		WorkArrays<float, 10> float_arr;
		WorkArrays<long long, 10> long_arr;

		for (int i = 0; i < int_arr.getLength(); i++) {
			int_arr[i] = rand() % 100;
			float_arr[i] = rand() % 100;
			long_arr[i] = rand() % 100;
		}

		int_arr.minimum();
		float_arr.minimum();
		long_arr.minimum();
	};


//	������� � ��������
void array1() {
	//	�������� ������ �� ��������� ����� � �������� ����������� � ������������ �������� � ���� �������.

	int mass[10], max, min, i=0; 
	cout << "��������: |";
	for ( i =0 ; i < sizeof(mass)/4; i++)
	{
		mass[i] = rand() % 99;
		cout << mass[i] << "|";
	}
	
	cout << endl;
//	max = mass[0];
//	min = mass[0];

	for (i = 0; i < (sizeof(mass) / 4)-1; i++) 
	{
		if (mass[i + 1] > mass[i])
			max = mass[i+1];
		if (mass[i + 1] < mass[i])
			min = mass[i + 1];
	};
	cout << max << endl << min << endl;
};

//	������ �� ������������
void array2() {
	//	�������� ���������, � ������� ������������ ����� ������������� ����� ������� � �������
	//	��� ��� �������� � ����������.
	int len;
	cout << "������� ����� �������" << endl;
	cin >> len;
	int* arr;
	arr = new int [len];
	cout << "������� ������" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}

	cout << "��� ��� ������ arr[" << len << "]" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " | ";
	}
	delete[] arr;
};

//	���������� �������
void array3() {
	//	�������� ���������, ������� ����� ������� ������������ ������ ������ �������,
	//	� ����� ��� �������� ��������� ��� �������.
	//	����� ����� ������ ������ ����� ������������� � ������� ����������� ���������.
	//	� ����� ��������� �������� ������������ ������ �� �����.
	int len;
	cout << "������� ����� �������" << endl;
	cin >> len;
	int* arr;
	arr = new int[len];
	cout << "������� ������" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}

	cout << "��� ��� ������ arr[" << len << "]" << endl;

	int temp; // ��������� ���������� ��� ������ ��������� �������
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// ������ �������� �������
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " | ";
	}
	delete[] arr;
};

//	��������� ������ !!! ������������ !!!
void array4() {
	/*�������� ��������� ������ � �������� ��� �� ����� ��� ������ ������ while.
		��������� ������ ������ :*/
	int lines, columns;	// ������, �������
	cout << "������� ���������� ����� � ��������� � ������" <<endl;
	cin >> lines >> columns;
	//int x[len][len] = { { 0, 34, 2 }, { 9, 12, 18 }, { 3, 4, 5 } };
	
	int** arr = new int* [lines];	

	for (int i = 0; i < lines; i++)
			arr[i] = new int[columns];
	srand(time_t(NULL));	// ����� ����� ������� ��� ���������� ���� �����

	// ���������� �������
	for (int count_row = 0; count_row < lines; count_row++)
		for (int count_column = 0; count_column <columns; count_column++)
			arr[count_row][count_column] = rand() % 100;

	int i = 0;
	while (i < lines)
	{
		int j = 0;
		while (j < columns)
		{
			cout << arr[i][j] << " | ";
				j++;
		}
		cout << endl;
		i++;
	}
	// �������� ���������� ������������� �������
	for (int count = 0; count < lines; count++)
		delete []arr[count];
}

//����� ����� ���������
void array5() {
	//	�������� ������ � ���������, ������� ����� �������� ������ ����� 
	//	��������� �������� �������.
	int len;
	cout << "������� ����� �������" << endl;
	cin >> len;
	int* arr;
	arr = new int[len];
	srand(time(0));	// ����� ����� ������� ��� ���������� ���� �����
	for (int i = 0; i < len; i++){
		arr[i] = rand() % 1000;
		cout << arr[i] << "|";
	}

	int min=arr[0], premin=0;

	for (int i = 1; i < len; i++)
	{
		if (min > arr[i])
		{
			premin = min;
			min = arr[i];
		}
		else if (premin> arr[i])
		{
			premin = arr[i];
		}
	}
	cout << endl << "������ ���������� �������: " << premin << endl << min;
	delete[] arr;
};
