#include <stdio.h>
#include <errno.h>

#define DCM  (1)
#define KM (2)
#define M (3)
#define MM (4)
#define CM (5)

int main() {
	int unit,
		rc;
	double value = 0,
		out_value = 0;
	printf("Input unit of measurements\n 1- for decimeters\n 2- for kilometers\n 3- for meters\n 4- for millimeters\n 5- for centimeters\n");
	rc = scanf_s("%d", &unit);
	if (rc == 1) {
		printf("Input value to convert in kilograms:\n");
		rc = scanf_s("%le", &value);
		if (rc == 1) {
			printf("rc=%d\n", rc);

			switch (unit) {
			case DCM:
				out_value = value * 0.1;
				break;
			case KM:
				out_value = value * 1000;
				break;
			case M:
				out_value = value;
				break;
			case MM:
				out_value = value * 0.001;
				break;
			case CM:
				out_value = value * 0.01;
				break;
			default:
				printf_s("There no such unit that represents input number.\n");
				break;
			}
			printf("Output: %e meters", out_value);
		}
		else {
			printf("You\'ve entered wrong value to be converted in meters\n");
		}
	}
	else {
		printf("You\'ve entered wrong unit number\n");
	}
	return 0;
}