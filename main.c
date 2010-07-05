#include <stdio.h>
#include "inmultire.c"
#include "impartire.c"
#include "adunare.c"
#include "scadere.c"

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n%d\n%d\n%d\n", 
		adunare(a, b),
		scadere(a, b),
		inmultire(a, b),
		impartire(a, b));
	return 0;
}

