#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t numberOfTimes = 0;

	printf("Enter the number of times to print: ");
	scanf("%hhu",&numberOfTimes);

	for (; numberOfTimes > 0; numberOfTimes--)
	{
		printf("Hello World\n");
	}

	return 0;
}