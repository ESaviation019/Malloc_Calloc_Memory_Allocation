#include <stdio.h>
#include <stdlib.h>

int main(){
char*ptr=(char*) malloc(2);
	*ptr = 'A';
printf("%c %d\n",*ptr,ptr);
ptr++;
	*ptr = 'B';
printf("%c %d\n",*ptr,ptr);
}
