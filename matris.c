#include <stdio.h>
main()
{
	int i,j,n,m,x;
	printf("matris satir sayisi:");
	scanf("%d",&n);
	printf("matris sutun sayisi:");
	scanf("%d",&n);
	int a[n][m];
	for(i=0;i<n;i++)
	for (j=0;j<m;j++)
	{
		printf("%d. satir %d.sutun elemani:",i,j);
		scanf("%d",&a[i][j]);
		
	}
	for (i=0;i<n;i++)
	for(j=0;j<m;j++)
{

printf("%d.satir %d.sutun elemani %d dir.\n",i+1,j+1,a[i][j]);
}
}
