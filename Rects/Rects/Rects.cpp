// Rects.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area (void) {return (width*height);}
	string nome();
};

Rectangle::Rectangle(int width, int height)
{
	Rectangle::width = width;
	Rectangle::height = height;
}

string Rectangle::nome()
{
	string retorno = "u-hu";
	return retorno;
}

//int main()
//{
//	Rectangle rect (3,4);
//	cout << "area = " << rect.area() << endl;
//
//	Rectangle *r = new Rectangle(5,6);
//
//	Rectangle *varios = new Rectangle[50];
//	for (int i = 0; i < 50; i++)
//	{
//		varios[i] ; 
//	}
//
//	cout << "*area = " << r->area() << endl;
//
//	cout << r->nome() << endl;
//
//	return 0;
//}

