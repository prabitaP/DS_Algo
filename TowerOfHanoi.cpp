#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cstdio>
#include <iostream>
#define SIZE 50
int main(void) {
	char s[SIZE];
	setbuf(stdout, NULL);
	return EXIT_SUCCESS;
}

int characterCount(char *a){
	if(*a == '\0'){
		return 0;
	}
	else{
		return 1 + characterCount(a+1);
	}
}

int RussianProductMethod(int x, int y){
	if(x == 0){
		return 0;
	}
	else{
		return ((x%2) * y) + RussianProductMethod(x/2, y*2);
	}
}
void toBinaryString(int x){
	if(x/2 == 0){
		printf("%d", x);
	}
	else{
		toBinaryString(x/2);
		printf("%d", x/2);
	}
}
void TowerOfHanoi(int n, char source, char auxillary, char target){
	if(n == 1){
		printf("Shift %d from %c to %c\n", n, source, target);
	}
	else{
		TowerOfHanoi(n-1, source, target, auxillary);
		printf("Shift %d from %c to %c\n", n, source, target);
		TowerOfHanoi(n-1, auxillary, source, target);
	}
}
