// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[20],b[20];
//     printf("enter name with surname= ");
//     scanf("%s %s",a,b);
//     strcat(a,b);
//     printf("%s",a);
//     printf("\n%s",b);
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("enter two string= ");
    scanf("%s %s",a,b);
    strcat(a," ");  // concat pre-define function
    // strcat(a,b);
    printf("%s",a);
    printf("\n%s",b);
}

