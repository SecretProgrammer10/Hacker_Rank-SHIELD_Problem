#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define MAX 1000000

long int checkSequence(char coachSequence[], long int len)
{
	long int count = 0;
	long int* digits = (long int*)malloc(1000000*sizeof(long int));
	while(len--)
	{
		digits[count] = (long int)coachSequence[count];
		printf("%li\n", digits[count]);
		count++;
	}
	long int limit = count - 1;
	for(int i=0; i<count; i++)
	{
		for(int j=0; j<count; j++)
		{
			if(i==j)
				continue;
			else if(digits[i] == digits[j])
				return 0;
			else if(abs(digits[i]-digits[j])>limit)
				return 0;
		}
	}
	return 1;
}

int main()
{
	int test = 0;
	scanf("%d", &test);
	char coachSequence[MAX];
	while(test--)
	{
		scanf("%s", &coachSequence);
		long int len = strlen(coachSequence);
		//long int sequence[MAX];
		//long int sequence = (long int)coachSequence;
		if(checkSequence(coachSequence, len))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
