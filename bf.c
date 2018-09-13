#include <stdio.h>
#define S (1<<16)
#define I a[1]
#define D a[0]
#define C case
#define B break
static char d[S], p[S];
int main(int i, char *a[]) {
 fread(p, 1, S, fopen(I, "r"));
 for (D = d, I = p; I < p + S; I++) {
  switch (i = *I) {
  C '[': C ']': for (i = '\\' - *I; i < 0 ? *D : !*D; i += *(I += i > 0 ? 1 : -1) == '[' ? 1 : *I == ']' ? -1 : 0); B;
  C '+': C '-': *D -= i - ','; B;
  C '<': C '>': D += i - '='; B;
  C ',': *D = getchar(); B;
  C '.': putchar(*D); B;
  }
 }
}
