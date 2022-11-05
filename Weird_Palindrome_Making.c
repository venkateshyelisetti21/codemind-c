#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int t, n, *arr;
	
	scanf("%d", &t);
	
	 while (t--) 
	 {
	     scanf("%d", &n);
	     
	     arr = (int *) malloc (sizeof(int) * n);
	     
	     int z = 0;
	     
	     for (int i = 0; i < n; i++) 
	     {
	         scanf("%d", &arr[i]);
	         
	         if (arr[i] % 2 == 0) 
	         {
	             z++;
	         }
	     }
	     int y = n - z;
	     
	     printf("%d
", y / 2);
	     
	 }
	return 0;
}

