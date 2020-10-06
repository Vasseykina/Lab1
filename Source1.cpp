#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	short d = 0;
	int a = 0 ;
	float b = 0 ;
	char s[10];
	int e = 0;
	e = scanf("%o", &a);
	if (e != 1) {
		return -1;
	}
	printf("%d\n", a);
	e = scanf("%u", &a);
	if (e != 1) {
		return -1;
	}
	printf("%d\n", a);
	e = scanf("%x", &a);
	if (e != 1) {
		return -1;
	}
	printf("%s\n",s);
	e = scanf("%2d %f %s ", &a,&b,s);
	if (e != 3) {
		return -1;
	}
	printf("%d %.3f %s", a,b, s);
	e=scanf("%hd", &d);
	if (e != 1) {
		return -1;
	}
	printf("%hd", d);

return 0;
}
