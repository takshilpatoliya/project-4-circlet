#include<stdio.h>
 /*  1 0 1 0 1
       0 1 0 1
         1 0 1
           0 1
             1   
  */
 main()
 {
 	int r,c,s;
 	
 	for(r=1;r<=5;r++)
 	{
 		for (s=r;s>1;s--)
 		{
 			printf("  ");
 			
		}
	   for (c=r;c<=5;c++)
 		{
 			if(c%2==0)
 			{
 				printf("0 ");
			}
 			else
 			{
 				printf("1 ");
			 }
		}
		
		printf("\n");
    }
 }