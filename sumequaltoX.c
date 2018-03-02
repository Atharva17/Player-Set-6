#include <stdio.h>
int main(void) {
  int sum,N,X,n[10],i,j;
  scanf("%d%d",&N,&X);
  for(i=0;i<N;i++)
  scanf("%d",&n[i]);
  for(i=0;i<N;i++)
  {
     for(j=i+1;j<N;j++)
    {
      sum=0;
      sum=n[i]+n[j];
      if(sum==X)
       {
        printf("yes");
        break;
       }
    }
  }
 	return 0;
}
