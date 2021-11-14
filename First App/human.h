#pragma once
//�������� ����� �������. ��������� � ���� ���������� � ������ ������ �����,
//� ����� ���������� �����(0 - 100), ������� ����� ��������� ������ ��� ������(int, float..).
//�������� �����������, ��� ������������� ��� ������. �������� �����, �� ������� ��������
//���������� "health" �� �����.

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