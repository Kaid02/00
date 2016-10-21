/*
Student Name : Kabir D Shrestha 
Subject : Programming Fundamental
Lab No. : 05
Program : Write a C program to print largest numbers among three using
			if,else,if-else.
Date : 2016-10-21
*/
#include<stdio.h>
	int main(){
		int a,b,c;
		
		printf("\nEnter the first number:");
		scanf("%d",&a);
		
		printf("\nEnter the second number:");
		scanf("%d",&b);
		
		printf("\nEnter the third number:");
		scanf("%d",&c);
		
		
		if (a==b){
		if(a>c)
			printf("\n%d is greater",a);
		}
		
		
		else if (a==c){
		if (a>b)	
			printf("\n%d is greater",a);
		}
		
		
		else if (b==c){
			if(b>a)
			printf("\n%d is greater",a);
		}
		
		
		else if(a>b&&a>c)
			printf("\n%d is greater",a);
			
			
	else if(b>a&&b>c)
			printf("\n%d is greater",b);
	
	
	else if (c>a&&c>b)
		    printf("\n%d is greater",c);
		    
		 return 0;
		}    			
		
