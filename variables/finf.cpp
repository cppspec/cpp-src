#include <iostream>
#include<cstdlib>

bool f2(int);
int f1(int);


int main(){
	int x=0.8;
	int y=-4.2;
	int r=8;
	std::cout<<f1(x)<<'\n'<<f1(y)<<'\n'<<f1(r)<<'\n'<<f2(x)<<'\n'<<f2(y)<<'\n'<<f2(r)<<'\n';
	return 0;
}

int f1(int a){
	return abs(a)-1;
}

bool f2(int x){
	if(f1(x)>0) return true; //используем функцию f1 внутри функции f2
	/*else*/ return false; //прототипы могут быть объявлены в любом порядке. если писать без прототипов, то f1 должна быть реализована до того как она будет
							//использоваться внутри f2
}
