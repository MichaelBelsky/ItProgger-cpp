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

	//Вы объявили статическое поле.Но не определили.

	//	Добавьте

	//	int some::Instances;
	//	int some::TotalSumm;
	//	вне класса.

	//	Вдогонку - вам точно надо обнулять член класса при создании каждого экземпляра ?

	//	Update.Дабы не нарушать правило одного определения, эти определения должны располагаться в.cpp - файле, в единственном экземпляре.
	//	При их размещении в заголовочном файле они будут определены в каждом.cpp - файле проекта...

	
	//	Задание к уроку
	//	Возьмите весь код из прошлого задания(про класс Tiles) и добавьте в класс деструктор. Сделайте так, чтобы он выводил в консоль общее
	//	количество созданных объектов на основе этого класса.
	//	Дополнительно, пропишите чтобы все поля находились в модификаторе private.

	int t=0; // ебаный счетчик вызовов класса
	Tiles FirstClass(30, 50);
	Tiles SecondClass(10, 15, 25.5);
	Tiles ThirdClass;

	FirstClass.getData();
	SecondClass.getData();
	ThirdClass.getData();



};

void Lesson25() {
//	Создайте несколько классов.Первый класс будет вмещать методом, который запрашивает у пользователя его возраст. 
//	Создайте второй класс и сделайте его наследником первого. Пропишите в нем такой же метод, с таким же названием.
//	Этот метод будет спрашивать имя пользователя и получать его с клавиатуры.
//	Создайте объект на основе класса наследника и используйте созданный метод.


	AskName Tom;
	Tom.AskMethod();
};

void Lesson26() {

	//Создайте класс Auto с переменными name и price, а также добавьте конструктор,
	//который устанавливает все значения.

	//В классе объявите дружественные функции drive и setPrice. Первая функция должна принимать
	//лишь объект и выводить его название в консоль. Вторая - объект и цену,
	//после чего устанавливать цену для объекта, если цена больше за 0.

	//В главной функции main создайте объект и воспользуйтесь дружественными функциями.

	//Auto Fer("Ferrari", 1000);
	//drive(Fer);

	//cout << Fer.getName() << " цена: " << Fer.getPrice() << endl;

	//setPrice(Fer, 0);

	//cout << Fer.getName() << " цена: " << Fer.getPrice() << endl;

// Код ниже прописывается вне класса. Либо в int Main(), либо еще где. 
	//void drive(Auto & obj)
	//{
	//	cout << obj.name << " rules" << endl;
	//};

	//void setPrice(Auto & obj, int price) {
	//	price > 0 ? obj.price = price : obj.price = 666;
	//};
};

void Lesson27() {
	//	Создайте шаблон функции, которая будет принимать массив данных разного типа
	//	и возвращать минимальный элемент в массиве.

	//	Работает только если шаблон объявить перед вызовом int main()
	//	но, при этом при попытке создать функцию по шаблону внутри других функций (cpp)
	//	компилятор не распознает идентификатор
	//	Надо покопаться в настройках Visual Studio

	//template <typename Type>
	//Type minimal(Type * arr, int coutElements) {
	//	Type min = arr[0]; // минимальное значение в массиве
	//	for (int i = 0; i < coutElements; i++)
	//		if (min > arr[i])
	//			min = arr[i];
	//	return min;
	//}

	//	const int iSize = 3, fSize = 2, dSize = 3;

	//int i_arr[iSize] = { 23, 45, 78 };
	//float f_arr[fSize] = { 12.2, 67.5 };
	//double d_arr[dSize] = { 3.345, 7.567, 9.023 };

	//cout << "Минимальный элемент (int): " << minimal<int>(i_arr, iSize) << endl;
	//cout << "Минимальный элемент (int): " << minimal<float>(f_arr, fSize) << endl;
	//cout << "Минимальный элемент (int): " << minimal<double>(d_arr, dSize) << endl;

};

void Lesson28() {

};