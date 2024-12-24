#include<stdio.h>
int main(){
	FILE *fptr;
	char myString[100];
	fptr = fopen("bt01.txt", "a");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	printf("nhap vao mot chuoi: ");
	fgets(myString, 100, stdin);
	fprintf(fptr, "%s", myString);
	fclose(fptr);
}
