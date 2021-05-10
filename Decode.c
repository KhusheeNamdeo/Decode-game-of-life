#include <stdio.h>

void main() {
	char c;

	while(1) {
		scanf("%c", &c);
		if(c == 10)
			break;
		printf("%c", (c - 10 + 128) % 128);
	}
}
