#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;
	printf("Input your age: ");
	scanf("%i", &age);
	printf("Input your gpa: ");
	scanf("%f", &gpa);
	printf("Input your letter grade: ");
	scanf(" %c", &grade);
	printf("Age: %i\n", age);
	printf("GPA: %f\n", gpa);
	printf("Grade: %c\n", grade);
	return 0;
}
