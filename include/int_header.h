//вычисление факториала
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
