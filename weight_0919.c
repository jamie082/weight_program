// weight_logger.c

#include <stdio.h>

void my_function(void);

int main(void)
{
	FILE *fp;

	// correct text file name

	fp = fopen("weight_log.txt", "a");

	float weight;
	int month, day, year;

	printf("Weight Management v0.5\n");
	
	// if weight is a negative number or is not a digit

	do
	{
		printf("Enter weight: ");
		scanf("%f", &weight);

		if(weight < 0)
		{
			printf("Error! Negative number\n");
		}

	} while (weight < 0);

	printf("Enter date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	fseek(fp, 1, SEEK_END);
	fprintf(fp, "%d/%d/%d\t\t%.1f\n", month, day, year, weight);

	fclose(fp);

	return 0;
}
