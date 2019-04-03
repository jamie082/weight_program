// weight_logger.c

#include <stdio.h>
#include <stdlib.h>

void my_function(void);

int main(void)
{
	FILE *fp;

	char filename[20] = "weight_log.txt";

	fp = fopen(filename, "a");

	if((fp = fopen(filename, "a")) == NULL)
	{
		fprintf(stderr, "Error opening file.");
		exit(1);
	}

	char input[15];
	int month, day, year;

	printf("Weight Management v0.5\n");
	
	// if weight is a negative number or is not a digit

	int x;

	char *ptr;
	int ret;

	long number_2;
	static int a;

	do
	{
		printf("Enter weight: ");
		scanf("%s", input);

		// if i.e. "205.2a" or "-205.2" is entered, truncate,
		ret = strtol(input, &ptr, 10);

		number_2 = ret;
		
		x = 1;
		// printf("%ld\n", number_2);
		
		// abs() absolute value of number
		// labs() return absolute value of long integer
		
		a = labs(number_2);

		printf("(%d lbs)\n", a);
	} while (x != 1);

	printf("Enter date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("(%d/%d/%d)\n", month, day, year);

	fseek(fp, 1, SEEK_END);
	fprintf(fp, "%d/%d/%d\t\t%d\n", month, day, year, a);

	printf("Successfully wrote to file %s\n", filename);

	fclose(fp);

	return 0;
}
