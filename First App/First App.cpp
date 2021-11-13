// First App.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <clocale>
#include "print.h"
#include "math.h"
#include "Tiles.h"
#include "trainings.h"
#include "LessonsTasks.h"
//#include "Auto.h"


using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");

	RunLessons();

//	RunTraining();


//	1. Создайте файл hi.txt и поместите в него строку : «Какая - угодно информация!».
	//  Откройте файл для чтения и выведите информацию на экран.Все необходимо сделать применяя только C++.

//   ofstream sfile;
//char text[50];
//sfile.open("hi.txt");
	//ofstream("hi.txt");
	//if (sfile.is_open()) {
	//	sfile << "Какая-угодно информация!";
	//}
	//sfile.close();

//ifstream read_file("hi.txt");
	//if (!read_file.is_open())
	//	cout << "Ошибка, файл не найден!" << endl;
	//else {
	//	read_file.getline(text, 50);
	//	cout << text << endl;
	//	read_file.close();
	//}    

//    2. Создайте функцию, которая будет делить одно число на другое. В случае, если второе число будет равным 0,
    //    то выбрасывайте ошибку, в которой будет информация про то, что деление на ноль невозможно.
	//try
	//{
	//	division(5, 0);
	//}
	//catch (const char *exception)
	//{
	//	cout << exception << endl;
	//}	

// print(math(5,4));

//	RunTraining();


	//Tiles FirstClass(30, 50);
	//Tiles SecondClass(10, 15, 25.5);
	//Tiles ThirdClass;

	//FirstClass.getData();
	//SecondClass.getData();
	//ThirdClass.getData();
    return 0;
}

//void division(int a, int b)
//{
//	if (b==0)
//	{
//		throw "деление хиба";
//		cout << (a/b) << endl;
//	}
//
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
