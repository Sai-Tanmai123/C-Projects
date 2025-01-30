// EscapeCharacters
#include <stdio.h>
main()
{
    printf("Hi\nTanmai\n");
    printf("Hi");
    printf("\nTanmai");
    printf("\nAppana\tTanmai"); // Only 2 gaps between names because already 6 letters are occupied [8 spaces from beginning]
    printf("\nAppana\b\b\b\bTanmai");
    printf("\nAppana\rTannu");
    printf("\nWhat would you like to take Tea\\Coffee?");
    printf("\nYou are really \"Great\"");
    printf("\nYou are \'Nice\'");
    printf("\nYou are an Idiot\a");
    printf("\n");
}
