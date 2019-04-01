// Uses normal weight_log.txt file name
// weight_logger.c
// added new comments
#include <stdio.h>

void my_function(void);

int main(void)
{
	FILE *fp;

	// correct text file name
	fp = fopen("weight_log_file.txt", "a");

	float weight;
	int month, day, year;

	printf("Weight Management v0.5\n");
	printf("Enter weight: ");
	scanf("%f", &weight);

	printf("Enter date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	fseek(fp, 1, SEEK_END);
	fprintf(fp, "%d/%d/%d\t\t%.1f\n", month, day, year, weight);

	fclose(fp);

	return 0;
}
