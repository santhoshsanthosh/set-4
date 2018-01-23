#include<stdio.h>
#include<conio.h>
void main()
{
 int count_words=0,i;
 int count_char=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
  count_char++;
  if(str[i]==' ')
  count_words++;
}
