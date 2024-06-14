3
#include <stdio.h>
#include <string.h>
void mc()
{
    // printf("login.......................1\n");
    // printf("Convert The Unit in Rupee$..2\n");
    // printf("Add New Connection..........3\n");
    // printf("Check you Pending Bill......4\n");
    // printf("Pay You Bill................5\n");
}
void lg()
{
    int n, a;
    char e[100];
    FILE *fptr = NULL;
    fptr = fopen("Y:\\STUFF\\login.txt", "a");
    printf("Name on Meter :\n");
    scanf("%s", &e);
    printf("Enter Your Phone Number:\n");
    scanf("%d", &a);
    printf("Enter Metre No :\n");
    scanf("%d", &n);
    
    fprintf(fptr, "%s\t\t", e);
    fprintf(fptr, "%d\t\t", a);
    fprintf(fptr, "%d\t\t", n);
    fclose(fptr);
}
void cv()
{
    float q;
    float r;
    printf(" ))))))))))))))))))))))))))))) 1 UNIT =  25 Rupee (((((((((((((((((((((((((((((((((((((\n ");
    printf("\n");
    printf("Enter Your Unit\n");
    scanf("%f", &q);
    r = (q * 25);

    printf("Total Rupess %0.5f $\n", r);
}
void ac()
{
    char t[100];
    char z[100];
    FILE *fptr = NULL;
    fptr = fopen("Y:\\STUFF\\new member.txt", "a");
    int x, a;

    do
    {
        printf("Enter Your Name\n");
        scanf("%s", &t);
        printf("Address:\n");
        scanf("%s", &z);
        printf("Enter your Aadhar Card :\n");
        scanf("%d", &x);
        fprintf(fptr, "%s\t\t", t);
        fprintf(fptr, "%s\t\t", z);
        fprintf(fptr, "%d\t\t", x);
        printf(" DO YOU WANT Exit press 1\n");
        scanf("%d", &a);
        fclose(fptr);
    } while (a != 1);
}
int main()
{
    int a, f;
    printf("(((((((((((((((((((((((((((((((            B I L L   M A N A G N M E N T           )))))))))))))))))))))))))))))))\n\n\n");
    mc();
    

    do
    {
     printf("Choose From Menu\n");
    scanf("%d", &a);
        switch (a)
        {
        case 1:
            lg();
            break;
        case 2:
            cv();
            break;
        case 3:
            ac();
            break;
        default :
        printf("pls your enter VAILD CHOOSE\n");
           break;
        }
        printf("Exit press FROM MENU .............1 \n");
            scanf("%d", &f);
        
    } while (f != 1);
    return 0;
}
