#include <stdio.h>

int main(void) {
	int found = 0;
	for(int i = 0; i < 5; i++) {
		char str[11] = { '~' };
		scanf("%s", str);
		for(int c = 0; c < 11 - 2; c++) {
			if(str[c] == '~') continue;
			char check[3];
			for(int ii = 0; ii < 3; ii++) 
				check[ii] = str[c + ii];
			if(check[0] == 'F' && 
				check[1] == 'B' && check[2] == 'I') {
				printf("%d", i + 1);
				printf(" ");
				found++;
			}
		}
	}
	if(found == 0) printf("HE GOT AWAY!");
	printf("\n");
	return 0;
}