#include<iostream>

double sum(double a, double b=5.5){ //аргументы по умолчанию должны указываться в последнюю очередь, т.е. справа от остальных
	return a+b;						
}

int main(){
	double x=1.0;
	double y=3.2;
	std::cout<<sum(x,y)<<'\n'; // 1.0 + 3.2 = 4.2
	std::cout<<sum(x)<<'\n'; // 1.0 + 5.5 = 6.5
	return 0;
}
