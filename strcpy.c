

#include <stdio.h>
int a,b;
int n;
char *copy_string(char str1[], char str2[])
{
       
      int i=0;
      while(str2[i]!='\0')
     {
      str1[i]= str2[i];
      i++;
     }
     return str1;
   
    
    
}
int main()
{
    char name1[30];
    char name2[30];
    printf("enter the string1 = ");
    scanf("%s", name1);
    printf("enter the string2 = ");
    scanf("%s", name2);
    char *str = copy_string(name1,name2);
    printf("%s",str);
    return 0;
}

