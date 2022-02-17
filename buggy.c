#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define L_SIZE 32

char * buf;

int sum_to_n(int num)
{
    int i,sum=0;
    for(i=1;i<=num;i++)
        sum+=i;
    return sum;
}

void printSum()
{
    char line_read[L_SIZE];

    printf("enter a number:\n");
    fgets(line_read, L_SIZE, stdin);
    if(line_read != NULL)
        strtok(line_read, "\n");
	char*buf = malloc(36*sizeof(char));
	sprintf(buf,"sum=%d",sum_to_n(atoi(line_read)));
    printf("%s\n",buf);
}

int main(void)
{
    printSum();
    return 0;
}

