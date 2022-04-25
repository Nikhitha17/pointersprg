#include <stdio.h>

//Macro for maximum number of characters in a string
#define MAX 100

int main()
{
    //declare string variables
    char str1[MAX]={"nikhi"};
    char str2[MAX]={"nikhi"};
    
    int loop;    //loop counter
    int flag=1;
    
    //declare & initialize pointer variables
    char *pStr1=str1;
    char *pStr2=str2;   
    
    //print strings
    printf("string1: %s\nstring2: %s\n",pStr1,pStr2);
    
    //comparing strings
    for(loop=0; (*(pStr1+loop))!='\0'; loop++)
    {
        if(*(pStr1+loop) != *(pStr2+loop))
        {
            flag=0;
            break;
        }
    }
    
    if(flag)
        printf("Strings are same.\n");
    else
        printf("Strings are not same.\n");
    
    return 0;    
}

