#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Enter Mirrored Half Diamond Rows =  ");
 	scanf("%d", &rows);

    printf("Mirrored Half Diamond Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(i = rows - 1; i > 0; i--)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
		printf("\n");
	}
 	return 0;
}