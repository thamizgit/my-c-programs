
#include <stdio.h>
#include <string.h>
int main()
{
 char s1[30] = "THAMIZ ";
 char s2[30] = "SELVAN ";
 const char s3='A';
 //strcpy() function
 printf("String copy s1 is: %s\n",strcpy(s1,s2));
 //strcat() function
 printf("Concatenation using strncat:%s\n",strcat(s1,s2));
 //strlen() function 
 printf("Length of string 1 :%d \n",strlen(s1));
 printf("Length of string 2:%d \n",strlen(s2));
 //strchr() function
 printf("string starting from %c is:%s\n",s3,strchr(s2,s3));
 //strcmp() function
 if (strcmp(s1, s2) ==0)
 { printf("string 1 and string 2 are equal\n");
 }
 else
 {
 printf("string 1 and 2 are different\n");
 }
 return 0;
}
