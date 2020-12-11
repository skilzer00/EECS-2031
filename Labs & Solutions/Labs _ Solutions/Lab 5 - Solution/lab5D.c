#include <stdio.h>
#include <string.h>

void sortArr(char *c);

int main() {
	int result; char c; int i; int count=0;
	char arr[50];
	fgets(arr,50,stdin);
	while( strcmp(arr,"quit\n"))
	{
		arr[strlen(arr)-1] = '\0';

		sortArr(arr);
		printf("%s\n\n", arr);

		fgets(arr,50,stdin);
	}
	return 0;
}

void sortArr(char *c){
	int n = strlen(c);
	int i;
	for (int i = 0; i < n-1; ++i)
	{
		char min = *(c+i);
		int j; int minPos = i;
		for (int j = i+1; j < n; ++j)
		{
			if(*(c+j) < min) {
				minPos = j;
				min = *(c+j);
			}
		}
		char tmp = *(c+i);
		*(c+i) = *(c+minPos);
		*(c+minPos) = tmp;
	}
}