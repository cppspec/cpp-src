#include<iostream>

//void-функция
void func(){
	std::cout<<"void-функция, которая ничего не делает, кроме вывода на экран этого сообщения\n";
	return;
}


//функция которая вычисляет факториал (аргумент должен быть целым неотрицательным числом)
int fact(int a){
	if(a<0){
		std::cerr<<"Невозможно вычислить факториал числа "<<a<<" , так как оно отрицательное\n";
		return -1;
	}
	int res=1;
	for(int i=2; i<=a; i++)
		res*=i;
	return res;
}

//решение уравнения ax+b=0
double solvLinEq(double a, double b){
	if(a==0 && b!=0){
		std::cerr<<"Уравнение "<<a<<"*x + "<<b<<" не имеет решений\n";
		return -1.0;
	}
	if(a==0 && b==0){
		return 0.0;
	}
	return -b/a;

}
