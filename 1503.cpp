int main()
{
    int a[1001];
    int n, i ,j;
    scanf("%d",&n);
 
	for (i=0; i<n; i++)
    {
  
		for (j=0; j<n; j++) 
        {
             printf("%d ",n*i+j+1);
        }
        printf("\n");
	i++;	
	if(i>=n) break;
		for (j=n-1; j>=0; j--) 
        {
             printf("%d ",n*i+j+1);
        }
        printf("\n");
    }
}
