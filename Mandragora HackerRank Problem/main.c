#include<conio.h>
#include<stdio.h>
main()
{
    int a[100000],b[100000],l=1,big;
	int i, j,x,N,temp,S=1,P=0,k,m,T,n;
    scanf("%d",&T);
    for(n=1;n<=T;n++)
    {
	scanf("%d",&N);
	for ( i=1; i<=N ; i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1; j<N; j++)
	{
		x=j;
		for(i=j+1; i<N+1; i++)
		{ if(a[x]>a[i])
		  {
		  	x=i;
		  }
		}
		if(i!=x)
		{
			temp=a[j];
			a[j]=a[x];
			a[x]=temp;
		}
 }
while(S<=N)
{
    for(k=S;k<=N;k++)
    {
        P=P+S*a[k];
        b[l]=P;
    }
P=0;
S++;
l++;
}
	big=b[1];
  for(m=1;m<N;m++){
      if(big<b[m])
           big=b[m];
  }
printf("%d",big);
printf("\n");
}
}
