#include<iostream>

int Func(){
	static int x=0;
	return ++x;
}

int main(){
	int a;
	for(int i=0; i<10; i++){
		a=Func();
		std::cout<<a<<'\n';
	}
	return 0;
}
