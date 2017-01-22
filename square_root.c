#include <stdio.h>


float binary_search(float val, float low, float high){
	float mid;
	
	mid = (low+high)/2;

	if (fabs(val - mid*mid) > 0.00001) {
		if (val > mid*mid) {
			binary_search(val, mid, high);
		} else {
			binary_search(val, low, mid);
		}
	} else {
		return mid;
	}
}

float square_root(int val){
	return binary_search((float)val, 0.0, (float)val);
}

int main(void) {
	printf("2: %f\n", square_root(2));
	printf("3: %f\n", square_root(3));
	printf("4: %f\n", square_root(4));
	printf("9: %f\n", square_root(9));
	printf("17: %f\n", square_root(17));
	printf("25: %f\n", square_root(25));
	printf("47: %f\n", square_root(47));
	return 0;
}



