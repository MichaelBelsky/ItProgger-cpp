#include <string>
#include <iostream>
#include <string>
#include <time.h>
#include "Tiles.h"
#include "AskAge.h"
#include "AskName.h"
#include "Auto.h"

using namespace std;

void Lesson24();
void Lesson25();
void Lesson26();
void Lesson27();
void Lesson28();
void Lesson29();




void RunLessons() {
	Lesson28();
};



void Lesson24() {
https://ru.stackoverflow.com/questions/525958/%D0%9F%D1%80%D0%B8-%D0%BE%D0%B1%D1%80%D0%B0%D1%89%D0%B5%D0%BD%D0%B8%D0%B8-%D0%BA-%D1%81%D1%82%D0%B0%D1%82%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%BE%D0%BC%D1%83-%D0%BF%D0%BE%D0%BB%D1%8E-%D0%BF%D0%BE%D0%BB%D1%83%D1%87%D0%B0%D1%8E-lnk2001-%D0%BD%D0%B5%D1%80%D0%B0%D0%B7%D1%80%D0%B5%D1%88%D1%91%D0%BD%D0%BD%D1%8B%D0%B9-%D0%B2%D0%BD%D0%B5%D1%88%D0%BD%D0%B8%D0%B9-%D1%81%D0%B8%D0%BC%D0%B2%D0%BE%D0%BB

	//�� �������� ����������� ����.�� �� ����������.

	//	��������

	//	int some::Instances;
	//	int some::TotalSumm;
	//	��� ������.

	//	�������� - ��� ����� ���� �������� ���� ������ ��� �������� ������� ���������� ?

	//	Update.���� �� �������� ������� ������ �����������, ��� ����������� ������ ������������� �.cpp - �����, � ������������ ����������.
	//	��� �� ���������� � ������������ ����� ��� ����� ���������� � ������.cpp - ����� �������...

	
	//	������� � �����
	//	�������� ���� ��� �� �������� �������(��� ����� Tiles) � �������� � ����� ����������. �������� ���, ����� �� ������� � ������� �����
	//	���������� ��������� �������� �� ������ ����� ������.
	//	�������������, ��������� ����� ��� ���� ���������� � ������������ private.

	int t=0; // ������ ������� ������� ������
	Tiles FirstClass(30, 50);
	Tiles SecondClass(10, 15, 25.5);
	Tiles ThirdClass;

	FirstClass.getData();
	SecondClass.getData();
	ThirdClass.getData();



};

void Lesson25() {
//	�������� ��������� �������.������ ����� ����� ������� �������, ������� ����������� � ������������ ��� �������. 
//	�������� ������ ����� � �������� ��� ����������� �������. ��������� � ��� ����� �� �����, � ����� �� ���������.
//	���� ����� ����� ���������� ��� ������������ � �������� ��� � ����������.
//	�������� ������ �� ������ ������ ���������� � ����������� ��������� �����.


	AskName Tom;
	Tom.AskMethod();
};

void Lesson26() {

	//�������� ����� Auto � ����������� name � price, � ����� �������� �����������,
	//������� ������������� ��� ��������.

	//� ������ �������� ������������� ������� drive � setPrice. ������ ������� ������ ���������
	//���� ������ � �������� ��� �������� � �������. ������ - ������ � ����,
	//����� ���� ������������� ���� ��� �������, ���� ���� ������ �� 0.

	//� ������� ������� main �������� ������ � �������������� �������������� ���������.

	//Auto Fer("Ferrari", 1000);
	//drive(Fer);

	//cout << Fer.getName() << " ����: " << Fer.getPrice() << endl;

	//setPrice(Fer, 0);

	//cout << Fer.getName() << " ����: " << Fer.getPrice() << endl;

// ��� ���� ������������� ��� ������. ���� � int Main(), ���� ��� ���. 
	//void drive(Auto & obj)
	//{
	//	cout << obj.name << " rules" << endl;
	//};

	//void setPrice(Auto & obj, int price) {
	//	price > 0 ? obj.price = price : obj.price = 666;
	//};
};

void Lesson27() {
	//	�������� ������ �������, ������� ����� ��������� ������ ������ ������� ����
	//	� ���������� ����������� ������� � �������.

	//	�������� ������ ���� ������ �������� ����� ������� int main()
	//	��, ��� ���� ��� ������� ������� ������� �� ������� ������ ������ ������� (cpp)
	//	���������� �� ���������� �������������
	//	���� ���������� � ���������� Visual Studio

	//template <typename Type>
	//Type minimal(Type * arr, int coutElements) {
	//	Type min = arr[0]; // ����������� �������� � �������
	//	for (int i = 0; i < coutElements; i++)
	//		if (min > arr[i])
	//			min = arr[i];
	//	return min;
	//}

	//	const int iSize = 3, fSize = 2, dSize = 3;

	//int i_arr[iSize] = { 23, 45, 78 };
	//float f_arr[fSize] = { 12.2, 67.5 };
	//double d_arr[dSize] = { 3.345, 7.567, 9.023 };

	//cout << "����������� ������� (int): " << minimal<int>(i_arr, iSize) << endl;
	//cout << "����������� ������� (int): " << minimal<float>(f_arr, fSize) << endl;
	//cout << "����������� ������� (int): " << minimal<double>(d_arr, dSize) << endl;

};

void Lesson28() {

};