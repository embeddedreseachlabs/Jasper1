/*26. If a char is one byte wide, an integer is 2 bytes wide and a long integer is 4 byte wide, then
will the following structure always occupy 7 bytes?*/
struct ex
{
char ch ;
int i ;
long int a ;
}e ;
void main()
{
printf("size of strucure %d",sizeof(e));
}
