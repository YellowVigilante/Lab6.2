// Lab6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define  DECIMETER (1)
#define  KILOMETER (2)
#define  METER (3)
#define  MILLIMETER (4)
#define  CENTIMETER (5)

int main() {
	int unit;
	double value = 0;
	double out_value = 0;
	printf("Input unit of measurements\n 1- for decimeters\n 2- for kilometers\n 3- for meters\n 4- for millimeters\n 5- for cenntimeters\n");
	scanf_s("%d", &unit);
	printf("Input unit\'s value:\n");
	scanf_s("%le", &value);
	
	switch (unit) {
	case DECIMETER:
		out_value = value;
		break;
	case KILOMETER:
		out_value = value * 1000;
		break;
	case METER:
		out_value = value;
		break;
	case MILLIMETER:
		out_value = value * 0.001;
		break;
	case CENTIMETER:
		out_value = value * 0.01;
		break;
	default:
		printf_s("There no such unit that represents input number.");
		out_value = 0;
		break;
	}
	printf("Output: %e", out_value);
	return 0;
}