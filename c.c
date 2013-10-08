#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i, j;
	int iNum[10][1];
	char name[10][4];
	int score[10][4];

	FILE *fp, *fp1;

	fp = fopen("과제.txt", "r");
	fp1 = fopen("과제3.txt", "w");

	if (fp == 0){
		printf("error");
		exit(0);
	}

	fscanf(fp, "%d %c %d", &iNum[0][3], &name[1][1], &score[0][4]);
	fprintf(fp1, "%d\n", iNum[0][3], name[1][1], score[0][4]);

	system("pause");
	return 0;
}
