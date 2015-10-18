#include<iostream>

void f(int);

int main(){
	f(3);
	f(5);
	return 0;
}

void f(int a){
	std::cout<<a*a<<'\n';
	return;
}
