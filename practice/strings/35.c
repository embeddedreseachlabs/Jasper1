//34. If size of a pointer is 4 bytes then what will be the output of the following program ?
#include<stdio.h>
#include<string.h>
int main ( ){
char *str[ ] = { "frogs", "do" , "not" , "die." , "they" , "croak!" };
printf( "%d %d %d\n", sizeof (str), strlen (str[0]),sizeof(str[2]));
return 0 ;
}
