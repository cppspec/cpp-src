#include<iostream>
//#include<clocale> //это если надо для включения кириллицы в консоли, вроде бы так это включается

//реализации этих функций находятся в all_func.cpp файле
int fact(int);
void func();
double solvLinEq(double,double);

int main(){
	//setlocale(LC_ALL, "Russian");	//кириллица
	//вызов функции func()
	func();
	//вычисление 4! и 7!
	std::cout<<"Factorial chisla 4 raven "<<fact(4)<<'\n';
	std::cout<<"Facrotial chisla 7 raven "<<fact(7)<<'\n';
	//ввод а и b для решения ax+b=0
	std::cout<<"Vvedite 2 chisla\n";
	double a,b;
	std::cin>>a>>b;
	std::cout<<"Resheniyem uravneniya "<<a<<"*x + "<<b<<"=0 yavlyaetsya chislo "<<solvLinEq(a,b)<<'\n';
	return 0;
}
