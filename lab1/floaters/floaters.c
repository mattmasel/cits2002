#include <stdio.h>

void getNums()
{
	float new_number = 0.10;
	for(float i = 0.0; i < 20.0; i++) {
		printf("%.100f\n", new_number + i);
	}
}

int main(void)
{
	getNums();
	return 0;
}
