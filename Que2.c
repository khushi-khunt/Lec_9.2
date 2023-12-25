#include<stdio.h>
#include<string.h>
void main()
{
    char username[20];
    char pswd[10];
 
    printf("Enter your email :- ");
    scanf("%s",&username);
 
    printf("Enter your password :- ");
    scanf("%s",&pswd);
 
    if(strcmp(username,"khushi@gmail.com")==0)
    {
        if(strcmp(pswd,"123456")==0)
        {
            printf("Login Successfull....");
        }
        else
        {
            printf("wrong password");
        }
    }
    else
    {
    printf("Login Failed. Invalid Credentials...");
}
}
