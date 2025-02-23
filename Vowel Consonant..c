#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter any alphabet: ");
    scanf("%c",&alphabet);
    if(alphabet== 'a' || alphabet== 'e' || alphabet== 'i' || alphabet== 'o' || alphabet== 'u' )
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}
