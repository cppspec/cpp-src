#include<iostream>

//void-функция
void func(){
	std::cout<<"void-functsiya, kotoraya nichego ne delayet, krome vyvoda na ekran etogo soobshheniya\n";
	return;
}


//функция которая вычисляет факториал (аргумент должен быть целым неотрицательным числом)
int fact(int a){
	if(a<0){
		std::cerr<<"Nevozmozhno vychiclit' factorial chisla "<<a<<" , tak kak ono otritsatel'noe\n";
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
		std::cerr<<"Uravneniye "<<a<<"*x + "<<b<<" ne imeet reshenij\n";
		return -1.0;
	}
	if(a==0 && b==0){
		return 0.0;
	}
	return -b/a;

}
