#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i,i2,num,n=0,sum=0,sum2=0;
	float av;
	double sd2;
	scanf ("%d", &i);
	scanf ("%d", &num);
	if (i<=num)
		while (i <= num)
		{
			printf("%d ", i);
			sum = sum + i;
			i2 = i * i;
			sum2 = sum2 + i2;
			i = i + 1;
			n++;
			
		}
	else 
		while (num <= i)
		{
			printf("%d ", i);
			sum = sum + i;
			i2 = i * i;
			sum2 = sum2 + i2;
			i = i - 1;	
			n++;
			
		}
	
	av = (float)sum / n;
	printf("\naverage = %.2f", av);

	sd2 = ((float)((n * sum2) - (sum * sum)) / (n * (n - 1)));
	printf("\nsd = %.2f", sqrt(sd2));

	return 0;
}
