// String Function
#include<stdio.h>
#include<string.h>
main()
{
    char str[]="Tanmai", tar[50];
    printf("\nLength of a String is %d",strlen(str));
    printf("\nLowercase is %s",strlwr(str));
    printf("\nUppercase is %s",strupr(str));
    printf("\nReversing is %s",strrev(str));
    printf("\nOriginal Position is %s",strrev(str));
    strcpy(tar,str);
    printf("\nCopied String is %s",tar);

    printf("\nString Comparison is %d",strcmp(str,tar));
    printf("\nString Comparison is %d",strcmp("TANMAI","tanmai")); // This ide won't cross -1
    strcat(str," Appana");
    printf("\nConcatenated String is %s",str);

    printf("\n");
}

