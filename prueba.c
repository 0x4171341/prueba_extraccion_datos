#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

 
 
int check(char *str)
{
char buffer[2042];
int n=0;
 
bzero(buffer,2042);
 
while((str[n] != 0x00) && (isalnum((unsigned char)str[n])))
   buffer[n] = str[n++];
 
if (str[n] != 0x00)
   {
   printf("El string contenia un valor no alfanumerico.\n");
   exit(-1);
   }
 
printf("string: %s\n", buffer);
return(0);
 
}
 
 
main(int argc, char *argv[])
{
 
if (argc < 2)
   {
   printf("%s string\n", argv[0]);
   exit(-1);
   }
 
check(argv[1]);
 
}
//return (0); 

//<-->
