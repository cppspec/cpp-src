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
