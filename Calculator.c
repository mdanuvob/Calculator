#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==1||n==0)
        return n;
    else
        return n*fact(n-1);
}
main()
{
    int x,y,Add=0,Sub=0,Multi=1,Div,ka,pa,ex,i,pl1=0,pl2=0;
    int a[10];
    int b[10];
    int c[10];
    int d[10];
    float resulT;
    printf("\t                     FOLLOW THE INSTRACTION\n");
    printf("\n");
    printf("\n");
    printf("\nEnter 1 for General calculation\n");
    printf("\nEnter 2 to calculate Trigonometry  parts\n");
    printf("\nEnter 3 to calculate polynomial parts\n");
    printf("\n\n\n\nNow enter an option:");
    scanf("%d",&x);
    if(x==1)
    {
        system("cls");
        printf("                            WELCOME TO GENERAL PART\n\n\n");
        printf("\nEnter 1 to make Addition of numbers\n");
        printf("\nEnter 2 to substract numbers\n");
        printf("\nEnter 3 to make Multiplication of numbers\n");
        printf("\nEnter 4 to make Division  of numbers\n");
        printf("\n\n\n\nNow enter an option:");
        scanf("%d",&x);
        if(x==1)
        {
        system("cls");
        printf("                            WELCOME TO ADDING PART\n\n\n");
        printf("\npress CTRL+Z to end\n");
        printf("\n\nEnter number to add:");
        while((scanf("%d",&x))!=EOF)
        {
            Add=Add+x;
            printf("Enter number to add:");
        }
        printf("Result=%d\n",Add);
        }
        else if(x==2)
        {
            system("cls");
        printf("                            WELCOME TO SUBSTRACTING PART\n\n\n");
            printf("\nEnter two numbers:");
            scanf("%d%d",&x,&y);
            Sub=x-y;
            printf("\nResult:%d",Sub);
        }
        else if(x==3)
        {
        system("cls");
        printf("                            WELCOME TO MULTIPLYING PART\n\n\n");
        printf("\npress CTRL+Z to end\n\n\n");
        printf("Enter number for multiply:");
         while(scanf("%d",&x)!=EOF)

        {
            Multi=Multi*x;
            printf("Enter number for multiply:");

        }
        printf("Result=%d",Multi);
        }
        else if(x==4)
        {
        system("cls");
        printf("                            WELCOME TO DIVISION PART\n\n\n");
        printf("Enter a divident:");
        scanf("%d",&x);
        printf("\n\nEnter a divisor:");
        scanf("%d",&y);
        Div=x/y;
        printf("\n\nResult=%d",Div);
        }
    }/*End general part*/
    else if(x==2)
    {
        printf("\n");
        system("cls");
        printf("                            WELCOME TO TRIGONOMETRY  PART\n\n\n");
        printf("\nEnter 1 to calculate Logarithem of a number\n");
        printf("\nEnter 2 to calculate sin() value of a number\n");
        printf("\nEnter 3 to calculate cos() value of a number\n");
        printf("\nEnter 4 to calculate tan() value of a number\n");
        printf("\nEnter 5 to calculate Power value of a number\n");
        printf("\nEnter 6 to calculate Modulus of a number\n");
        printf("\nEnter 7 to calculate Factorial of a number\n");
        printf("\nNow enter an option:");
        scanf("%d",&x);
        if(x==1)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        resulT=log(y);
        printf("Result=%.2f",resulT);
        }
        else if(x==2)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        resulT=sin(y);
        printf("Result=%.2f",resulT);

        }
        else if(x==3)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        resulT=cos(y);
        printf("Result=%.2f",resulT);

        }
        else if(x==4)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        resulT=tan(y);
        printf("Result=%.2f",resulT);

        }
        else if(x==5)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        printf("Enter the power:");
        scanf("%d",&pa);
        resulT=pow(y,pa);
        printf("Result=%.2f",resulT);

        }
        else if(x==6)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        printf("Enter a value for denominator:");
        scanf("%d",&pa);
        resulT=fmod(y,pa);
        printf("Result=%.2f",resulT);

        }
        else if(x==7)
        {
        printf("\n\nEnter a number for calculation:");
        scanf("%d",&y);
        resulT=fact(y);
        printf("Result=%.2f",resulT);

        }



        }
        else if(x==3)
        {
            system("cls");
        printf("                            WELCOME TO POLYNIMIAL  PART\n\n\n");
        printf("Enter terms of Polynomials:");
        scanf("%d",&y);
         for(i=1;i<=y;i++)
         {
             printf("\nEnter qoifficient:");
             scanf("%d",&x);
             a[i]=x;
             printf("\nEnter exponent:");
             scanf("%d",&ex);
             b[i]=ex;
             printf("\n\n");

         }
         printf("First polynomial is:");
         for(i=1;i<=y;i++)
         {
             printf("%dx^%d",a[i],b[i]);
             if(i<y)
                printf("+");
         }
         printf("\n\n");
         for(i=1;i<=y;i++)
         {
             printf("\nEnter qoefficient:");
             scanf("%d",&x);
             c[i]=x;
             printf("\nEnter exponent:");
             scanf("%d",&ex);
             d[i]=ex;
             printf("\n\n");

         }
         printf("Second polynomial is:");
         for(i=1;i<=y;i++)
         {
             printf("%dx^%d",c[i],d[i]);
             if(i<y)
                printf("+");
         }
         printf("\n\nEnter the value of x:");
         scanf("%d",&x);
         for(i=1;i<=y;i++)
         {
             pl1=pl1+a[i]*pow(x,b[i]);
             pl2=pl2+c[i]*pow(x,d[i]);
         }
         printf("\n\nAddition of two polynomials is=%d",pl1+pl2);
         printf("\n\nSubstraction of two polynomials is=%d",pl1-pl2);
         printf("\n\nDivision of two polynomials is=%.2f",pl1/pl2);
         printf("\n\nMultiplication of two polynomials is=%d",pl1*pl2);


        }
        return 0;
}
