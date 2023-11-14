 #include<stdio.h>
 main()
 {
 	int a[6]={5,4,9,7,3,2};
 	int hold, i, j;
 	int n=6;//here n is the number of elements
 	
 	for(i=0;i<n-1;i++) //loop to control the passes
 	{
 		for(j=0;j<n-i-1;j++)
 		
 		{
 			if (a[j]>a[j+1])
 		
 			
 		{
 			hold=a[j];
 			a[j]=a[j+1];
 			a[j+1]=hold;
 			
			 }	
 			
		 }
	 } 
	 for(i=0;i<n;i++)
	 {
	 	printf(" \t %d",a[i]);
	 }
}
 
