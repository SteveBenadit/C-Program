int main()
{
	int num1, num2, max;

	/*Program to Find LCM of Two Numbers in C*/

	printf("Enter Two Number to Find LCM of Two Numbers:\n");
	scanf("%d %d", &num1, &num2);

	max = (num1 > num2) ? num1 : num2;
	while (1)
	{
		if (max % num1 == 0 && max % num2 == 0)
		{
			printf("LCM of %d And %d is %d", num1, num2, max);
			break;
		}

		++max;
	}

	return 0;
}  