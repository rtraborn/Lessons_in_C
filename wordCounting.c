#include <stdio.h>

#define YES 1
#define NO 0

main()       /* count lines, words, chars in input */
{
  int c, n1, nw, nc, inword;

  inword = NO;
  n1 = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++n1;
    if (c == ' ' || c== '\n' || c == '\t')
      inword = NO;
    else if (inword == NO) {
			    inword = YES;
			    ++nw;
    }
  }
  printf("%d %d %d\n", n1, nw, nc);
}
			
