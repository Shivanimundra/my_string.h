

#include <stdio.h>
int c=0,a,b,x=0;
int n,i=0;
int string_length( char str[])
{
    while(str[c]!= '\0')
    {
        c++;
    }
    return c;
    c=0;
}
void cmp_string(char *str1, char *str2)
{
    if(a!=b)                                   // if the length of the string is not equal then strings are not equal
    {
      printf("strings are not equal\n");
    }
    else
    {
             while(*str1 == *str2)           // compare each character  
             {
                str1++;
                str2++;
                i++; 
                if(i==a)                     // if all the characters are same
                {
                  printf("strings are equal\n"); // strings are equal
                  x=1;
                }
             }
    }
    if(x!=1)                              // if all the characters are not same, strings are not equal
    {
        printf("strings are not equal");
    }
}

 int main()
{
    char name1[30];
    char name2[30];
    printf("enter the string1 = ");
    scanf("%s", name1);
    a = string_length(name1);
    printf("enter the string2 = ");
    scanf("%s", name2);
    b = string_length(name2);
    cmp_string(name1,name2);
    return 0;
}

