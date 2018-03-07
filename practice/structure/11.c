#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct emp
{
int len ;
char name[1] ;
}emp;
int main ()
{
emp pi;
char newname[]="Ramu";
int l=strlen(newname);
emp *p = (emp *)malloc((sizeof(pi)-1 + (l+1) )) ;
p->len =l;
strcpy ( p->name,newname ) ;
printf (" %d %s\n" , p->len, p->name );
free(p);
return 0 ;

}
