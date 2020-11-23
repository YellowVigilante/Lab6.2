// Lab6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

#define  DECIMETER (1)
#define  KILOMETER (2)
#define  METER (3)
#define  MILLIMETER (4)
#define  CENTIMETER (5)

int main() {
	char c;
	short unit;
	float value;
	float out_value;
	printf("Input unit of measurements\n 1- for decimeters\n 2- for kilometers\n 3- for meters\n 4- for millimeters\n 5- for cenntimeters\n");
	scanf_s("%i", &unit);
	printf("Input unit\'s value:\n");
	scanf_s("%f", &value);
	fflush(stdin);
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
		break;
	}
	printf("Output: %f", out_value);
	scanf_s("%d", &c);
	return 0;
}