#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
	srand(time(0));
	int n = 5;
	int arr1[n], arr2[n];

	for(int i = 0; i < n; i++){
		arr1[i] = rand() / 100;
		arr2[i] = rand() / 100;
	}
	int s1 = 0;
	int s2 = 0;
	int z = 0;
	for(int i = 0; i < n; i++){
		s1 += arr1[i];
		for(int j = 0; j < n; j++){
			s2 += (pow(2, j - i) * arr2[j]);
			z += s1 * s2;
		}
	}
	printf("Final result is: %d\n", z);
	return 0;
}
