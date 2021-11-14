#pragma once
//Создайте класс Человек. Поместите в него переменную с первой буквой имени,
//а также переменную жизни(0 - 100), которая может принимать разный тип данных(int, float..).
//Создайте конструктор, что устанавливает все данные. Создайте метод, то выводит значение
//переменной "health" на экран.

template <class HealthType>
class Human
{
private:
	HealthType health;
	char nameFirstLetter;
public:
	Human(HealthType health, char name) {
		this->health = health;
		nameFirstLetter = name;
	};

	HealthType getHealth() {
		return health;
	};
};