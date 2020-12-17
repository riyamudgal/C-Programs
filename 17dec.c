#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any alphabet");
    scanf(" %c",&ch);

    if (ch=='a' ||ch=='A' || ch=='e' ||ch=='E' || ch=='i' || ch=='I'|| ch=='o' ||ch=='O'|| ch=='u' ||ch=='U')
    {
        printf("%c is a vowel", ch);
    }
    else
      { 
           printf("%c is a consonant",ch);   /* code */
      } 
        
}