#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int first = 48;
	int second = 49;
	int f;
	int s;

	while (first <=57 && second <= 57)
	{
		f = putchar(first);
		s = putchar(second);
		putchar(',');
		putchar(' ');
		second ++;
		

/*		
		n_first = first++;
		if (first <= n_first)
		{
			first++;
			continue;
		} 

		*/
/*		if (second <= 57)
		{
			second ++;
			continue;
		} else
		{
			first ++;
			continue;
		} */
	}
	putchar('\n');
	return (0);
}
