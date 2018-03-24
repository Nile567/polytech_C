#include <stdio.h> 

int main(void) 
{ 
	float f = 27.0; 
	float c = (f - 32.0) / 1.8; 
	printf("Ответ %.1f градусов по Фаренгейту в градусах Цельсия %.1f\n", f, c); 
	return 0; 
}