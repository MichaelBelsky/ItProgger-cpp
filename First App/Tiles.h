#pragma once

#include <iostream>
#include <clocale>
#include <string>
using namespace std;

// 1. Создать класс Tiles(кафель), который будет содержать поля с открытым доступом : brand, size_h, size_w, price и метод класса getData().
// В главной функции объявить пару объектов класса и внести данные в поля.Затем отобразить их, вызвав метод getData().
// Метод getData() выводит всю информацию про объект на экран.

//class Tiles
//{
//public:
//    string brand;
//    int size_h;
//    int size_w;
//    float price;
//
//    void getData() {
//        cout << brand << size_h << size_w << price << endl;
//    };
//
//    Tiles (string brand, int size_h, int size_w, float price) {
//        this->brand = brand;
//        this->size_h = size_h;
//        this->size_w = size_w;
//        this->price = price;
//    };
//};

//
//В прошлом уроке было задание создать класс Tiles.В классе Tiles создайте три конструктора :
//
//Конструктор, который устанавливает только высоту(size_h) и ширину(size_w);
//Конструктор, который устанавливает все переменные кроме переменной brand;
//Конструктор, который ничего не устанавливает.
//
//Создайте три объекта на основе класса и используйте все три конструктора.
//
//Конструктор по умолчанию должен выводить сообщение : "Empty constructor!".

class Tiles
{

private:
    string brand;
    int size_h;
    int size_w;
    float price;
public:
    static int countObjects;
    void getData() {
        cout << "Бренд - " << brand << " Высота - " << size_h << " Ширина - " << size_w << " Цена - " << price << countObjects << endl;
    };

    Tiles(){
        cout << "Empty constructor!" << endl;
    };

    Tiles(int size_h, int size_w) {
        this->size_h = size_h;
        this->size_w = size_w;
    };    

    Tiles(int size_h, int size_w, float price) {
        this->size_h = size_h;
        this->size_w = size_w;
        this->price = price;
    };

    ~Tiles() {
        countObjects++;
 //       cout << countObjects << endl;
    };
};