#include<stdio.h>
#include<string.h>

void main(){

	char a[100];
	int i,len;
	int upr=0,lwr=0,num=0,spc=0;
	
	printf("Create your password:-");
	gets(a);
	
    len=strlen(a);
    
    for(i=0;i<len;i++){
    
	if(a[i]>=65 && a[i]<=90 ) upr++;
	if(a[i]>=97 && a[i]<=122) lwr++;
	if(a[i]>='0' && a[i]<='9' ) num++;
	if(a[i]=='!' || a[i]=='@' || a[i]=='#'|| a[i]=='$' || a[i]=='&') spc++;
		
	}
	
	if(upr>0 && lwr>0 && num>0 && spc>0){
		printf("Your password is strong...");
	}
	else{
		printf("Your password is weak...");
	}
   
}
