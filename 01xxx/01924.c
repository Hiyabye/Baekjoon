#include <stdio.h>

int main(void) {
	int x, y;

	scanf("%d %d", &x, &y);
	switch(x) {
		case 1: break;
		case 2: y+=31; break;
		case 3: y+=59; break;
		case 4: y+=90; break;
		case 5: y+=120; break;
		case 6: y+=151; break;
		case 7: y+=181; break;
		case 8: y+=212; break;
		case 9: y+=243; break;
		case 10: y+=273; break;
		case 11: y+=304; break;
		case 12: y+=334; break; 
	}
	switch(y % 7) {
		case 1: printf("MON"); break;
		case 2: printf("TUE"); break;
		case 3: printf("WED"); break;
		case 4: printf("THU"); break;
		case 5: printf("FRI"); break;
		case 6: printf("SAT"); break;
		case 0: printf("SUN"); break;
	}
	return 0;
}