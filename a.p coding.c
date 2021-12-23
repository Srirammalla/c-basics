 #include<stdio.h>
 void main()
 {
 	int  x,y,z,s;
 	printf("enter the multiple number and inclusive number");
 	scanf("%d%d",&x,&y);
 	z=y/x;
 	s=z*(x+((z-1)*x)/2);
 	printf("the sum of %d multiples with inclusive %d is %d",x,y,s);
 }
