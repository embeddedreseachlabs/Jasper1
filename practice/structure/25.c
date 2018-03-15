//If the following structure is written to a file using fwrite( ), can fread( ) read it back successfully?
#include<stdio.h>
#include<stdlib.h>
struct emp
{
char *n ;
int age ;
};
int main()
{
struct emp e = { "sujay", 15 };
FILE *fp ;
fp = fopen ( "names.dat", "wb") ;
fwrite ( &e, sizeof (e), 1, fp ) ;
if(fread(&e,sizeof(e),1,fp)==1)
{
printf("%s,%d",*(e.n),e.age);
}
fclose(fp);
}
