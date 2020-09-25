//#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
	double result = 1;
	
	if (pow == 0)
		return 1;
	while (pow > 0) {
		result *= n;
		--pow;
	}
	return result;
}

// int main(){
// 	printf("%.0f\n", mx_pow(3, 3));
// 	printf("%.3f\n", mx_pow(2.5, 3));
// 	printf("%.0f\n", mx_pow(2, 0));
// }
