// weight_logger.c

#include <stdio.h>

void my_function(void);

int main(void)
{
	FILE *fp;

	// correct text file name

	fp = fopen("weight_log.txt", "a");

	char weight[10];
	int month, day, year;

	printf("Weight Management v0.5\n");
	printf("Enter weight: ");
	scanf("%s", weight);

	printf("Enter date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	fseek(fp, 1, SEEK_END);
	fprintf(fp, "%d/%d/%d\t\t%s\n", month, day, year, weight);

	fclose(fp);

	return 0;
}
