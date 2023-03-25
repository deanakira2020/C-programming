#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ch2.h"
#include "getnum.h"


void pun_c() // prints a simple pun - 3/25/23
{
	printf("To C or not to C: That is the question.\n");
}

void dweight() // imput height, weight, length -- output dimensions, vol, weight - 3/25/23
{
	int height, length, width, volume;
	float weight;
	printf("enter height\n");
	height = getnum(); 
	getchar();
	printf("enter length\n");
	length = getnum();
	getchar();
	printf("enter width\n");
	width = getnum();
	getchar();
	volume = height * length * width;
	weight = (volume + 165.0) / 166.0;

	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %f\n", weight);
}

void tempconversions() // convert temperatures between C, F, K
{
	int units;
	float temp;
	float temp2;
	float celsius;
	float kelvin;
	float fahrenheit;
	printf("enter the starting units\n 1: Fahrenheit 2: Celcius 3: Kelvin");
	units = getnum();
	getchar();
	if (units == 1) // Fahrenheit to Celcius and Kelvin
	{
		printf("Enter temperature in Fahrenheit \n");
		temp = getnum();
		temp2 = temp - 32.0;
		celsius = temp2 * (5.0 / 9.0);
		kelvin = celsius + 273;
		fahrenheit = temp;
		printf("Temperature in F: %f\n", fahrenheit);
		printf("Temperature in C: %f\n", celsius);
		printf("Temperature in K: %f\n", kelvin);

	}
	if (units == 2) // celsius to Fahrenheit and Kelvin
	{
		printf("Enter temperature in Celsius");
		temp = getnum();
		temp2 = temp * (9.0 / 5.0);
		fahrenheit = temp2 + 32;
		celsius = temp;
		kelvin = celsius + 273;
		printf("Temperature in F: %f\n", fahrenheit);
		printf("Temperature in C: %f\n", celsius);
		printf("Temperature in K: %f\n", kelvin);
	}
	if (units == 3) // Kelvin to Celsius and Fahrenheit
	{
		printf("Enter a number in Kelvin\n");
		temp = getnum();
		celsius = temp - 273;
		temp2 = celsius * (9.0 / 5.0);
		fahrenheit = temp2 + 32;
		kelvin = temp;
		printf("Temperature in F: %f\n", fahrenheit);
		printf("Temperature in C: %f\n", celsius);
		printf("Temperature in K: %f\n", kelvin);

	}
}
void spherearea() // Calculate volume of sphere in terms of pi, and approximated -- 3/25/23
{
	int radius;
	int radius_sqaure;
	int radius_cube;
	int area;
	float area2;
	printf("Enter the radius of the ciecle\n");
	radius = getnum();
	radius_sqaure = radius * radius;
	radius_cube = radius * radius_sqaure;
	area = (4.0 / 3.0) * radius_cube;
	area2 = (4.0 / 3.0) * radius_cube * 3.1415926535;
	printf("The area of the sphere in terms of pi is: %d pi\n", area);
	printf("The area of the sphere is approximately %f\n", area2);
}



