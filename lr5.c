#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void){
  double s=0.0,scor=0.0,cor=0.0,fcor,f,s2=0.0;
  int n1=1000,n2=1050,n3=1100,i;
  printf("Lab 5. Variant 3\n\n");
  for (i=1; i <= n3 ; i++) {
	f=exp(sqrt(3*i/2));
	fcor=f-cor;
	scor=s+fcor;
	cor=(scor-s)-fcor;
	s=scor;
	s2=s2+f;
	if ((i==n1) || (i==n2) || (i==n3)) {
	  printf("Number:       %d\n",i);
	  printf("No correction:%.30e\n",s2);
	  printf("Correction:   %.30e\n",s);
	  if ((s2-s)>0)
		printf("Comparison:   Sum with no correction is bigger than sum with correction\n");
	  if ((s2-s)<0) {
		printf("Comparison:   Sum with correction is bigger than sum with no correction\n");
	  }
	  if ((s2-s)==0) {
		printf("Comparison:   Sum with no correction is equal to sum with correction\n");
	  }
	  printf("Difference:   %.30e\n\n",fabs(s2-s));
	}
  }
  printf("Dimini Inc.\n");
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);
  getchar();
  return 0;
}
