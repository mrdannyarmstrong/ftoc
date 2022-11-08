#include <stdio.h>
void main(){
	float far, cel;
	printf("Please input farenheit: ");
	scanf("%f", &far);
	cel = (far-32)*0.5556;
	printf("%.2f", far);
	printf(" F is ");
	printf("%.2f", cel);
	printf(" C \n");

}