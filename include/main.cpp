#include<iostream>
#include"int_header.h"
#include"double_header.h"
#include"void_header.h"
//#include<clocale> //это если надо для включения кириллицы в консоли, вроде бы так это включается


int main(){
	//setlocale(LC_ALL, "Russian");	//кириллица
	//вызов функции func()
	func();
	//вычисление 4! и 7!
	std::cout<<"Факториал числа 4 равен "<<fact(4)<<'\n';
	std::cout<<"Факториал числа 7 равен "<<fact(7)<<'\n';
	//ввод а и b для решения ax+b=0
	std::cout<<"Введите 2 числа\n";
	double a,b;
	std::cin>>a>>b;
	std::cout<<"Решением уравнения "<<a<<"*x + "<<b<<"=0 является число "<<solvLinEq(a,b)<<'\n';
	return 0;
}
