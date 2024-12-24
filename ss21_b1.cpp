#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
	fprintf(fptr, "Hello World!\n");
	fclose(fptr);
}
