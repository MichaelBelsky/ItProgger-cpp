#pragma once

#include <iostream>
#include <clocale>
#include <string>
using namespace std;

// 1. ������� ����� Tiles(������), ������� ����� ��������� ���� � �������� �������� : brand, size_h, size_w, price � ����� ������ getData().
// � ������� ������� �������� ���� �������� ������ � ������ ������ � ����.����� ���������� ��, ������ ����� getData().
// ����� getData() ������� ��� ���������� ��� ������ �� �����.

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
//� ������� ����� ���� ������� ������� ����� Tiles.� ������ Tiles �������� ��� ������������ :
//
//�����������, ������� ������������� ������ ������(size_h) � ������(size_w);
//�����������, ������� ������������� ��� ���������� ����� ���������� brand;
//�����������, ������� ������ �� �������������.
//
//�������� ��� ������� �� ������ ������ � ����������� ��� ��� ������������.
//
//����������� �� ��������� ������ �������� ��������� : "Empty constructor!".

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
        cout << "����� - " << brand << " ������ - " << size_h << " ������ - " << size_w << " ���� - " << price << countObjects << endl;
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