#include"main.h"
#include<unistd.h>
/**
 *times_table - Print the 9 time table
 *@void: returns nothing
 */
void times_table(void)
{
int i, n;
int b;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
b = n * i;
if (b == 0)
{
_putchar('0');
 if (n != 9)
   {
 _putchar(','); 
_putchar(' ');
 _putchar(' ');
   }
  }
if (b >= 1 && b <= 9 )
  {
    _putchar(b % 10 + '0');
    if (n != 9)
      {
    _putchar(',');
    _putchar(' ');
    _putchar(' ');
      } 
  }
 else if (b >= 10)
   {
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
 if (n !=9){
   _putchar(','); 

_putchar(' ');
 }
}
_putchar('\n');
}
}
