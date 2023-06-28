#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function
time_t local;
//struct
struct user{
    char NIM[1000];
    char MAJOR[50];
    char CLASS[3];
};
int main(void)
{
    int a, b, Z, result, max, min, NIM, MAJOR, CLASS, menu;
    int number [1000];
    float d, e, c, f, resultdistribution;
    char name[1000];

    //string
    printf("Enter your name: ");
    gets(name);
    printf("===========================\n");
    strcat(name," ");
    printf("Hi %s welcome to our program,Please fill this form below:\n\n",name);

    //struct
    struct user user_1[100];
    printf("Enter your NIM:");scanf("%[^\n]",user_1[0].NIM); getchar();
    printf("Enter your MAJOR:");scanf("%[^\n]",user_1[0].MAJOR); getchar();
    printf("Enter your CLASS:");scanf("%[^\n]",user_1[0].CLASS);
    printf("\n");

    printf("===USER DATA===\n");
    printf("NIM: %s\n",user_1[0].NIM);
    printf("MAJOR: %s\n",user_1[0].MAJOR);
    printf("CLASS: %s\n",user_1[0].CLASS);
    printf("===============\n\n");

    //menu
    printf("===========================\n");
    printf("Mathematics Calculator\n");
    printf("===========================\n");
    printf("%s",ctime(&local));
    menu:
    printf("\t Menu :\n");
    printf("\t1. summation\n");
    printf("\t2. subtraction\n");
    printf("\t3. multiplication\n");
    printf("\t4. distribution\n");
    printf("\t5. even or odd \n");
    printf("\t6. positive or negative\n");
    printf("\t7. max and min\n");
    printf("\t8. temperatur convertion\n");
    printf("\t9. end the program\n");


    printf("choose the menu : ");
    scanf("%d",&menu);
    system("cls");

    switch (menu){
    //summation
      case 1:
        printf("\n1. summation :\n");
        printf("input the first number : ");
        scanf("%d", &a);
        printf("input the second number  : ");
        scanf("%d", &b);
        result = a + b;
        printf("------------------------------- +\n");
        printf("result = %d\n", result);
        break;

    //substraction
    case 2:
        printf("\n2. subtraction :\n");
        printf("input the first number  : ");
        scanf("%d", &a);
        printf("input the second number   : ");
        scanf("%d", &b);
        result = a - b;
        printf("------------------------------- -\n");
        printf("result = %d\n", result);
        break;

    //multiplication
    case 3:
        printf("\n3. multiplication :\n");
        printf("input the first number  : ");
        scanf("%d", &a);
        printf("input the second number : ");
        scanf("%d", &b);
        result = a * b;
        printf("------------------------------- x\n");
        printf("result = %d\n", result);
        break;

    //distribution
    case 4:
        printf("\n4. distribution :\n");
        printf("input the first number  : ");
        scanf("%f", &d);
        printf("input the second number  : ");
        scanf("%f", &e);
        resultdistribution = d / e;
        printf("------------------------------- :\n");
        printf("result = %.2f\n", resultdistribution);
        break;

    //odd or even
    case 5:

        printf("\n5. odd or even :\n");
        printf("input the number  : ");
        scanf("%d", &a);
        if (a%2==0)
        printf("number is even\n");
        else
        printf("number is odd\n");
        break;

    //positive or negative
    case 6:
      printf("\n6. positive or negative :\n");
      printf("input the number  : ");
      scanf("%d", &a);
      if (a>=0)
      printf("the number is positive\n");
      else
      printf("the number is negative\n");
      break;

    //max and min(array dan looping)
    case 7:
    //Masukkan untuk batas
      printf("How many numbers thats you want to input?: ");
      scanf("%d",&a);

      //looping untuk Memasukkan Data Ke Dalam Array
      for(b=1;b<=a;b++){
      printf("\n\n %d:",b);
      scanf("%d",&number [b]);
      }
      //Mencari Nilai Terbesar dan Terkecil di Array dengan Looping
      max=number[1];
      min=number[1];
      for(b=1;b<=a;b++)
      if(number[b]>=max){
      max=number[b];
      }
      else if (number[b]<=min){
      min=number[b];
      }
      printf("\n\n maximum number:%d",max);
      printf("\n\n minimum number:%d",min);
      break;

    case 8:
    while(1) {

    printf("\n temperature convertion\n");
    printf("1. Celcius convertion (c) \n");
    printf("2. Fahrenheit convertion(F) \n");
    printf("------------------------------\n");

    printf("select the menu: ");
    scanf("%d",&menu);
    fflush(stdin);

    if(menu == 1){

      printf("Input celcius temperature: ");
      scanf("%f", &c);

      f = (c*9/5)+32;

      printf("Celcius to Fahrenheit : %.2f\n", f);
      printf("\n");

    } else if (menu == 2){

      printf("Input Fahrenheit temperature: ");
      scanf("%f", &f);

      c = (f*5/9)-32;

      printf("Fahrenheit  to celcius %.2f\n",c);

      printf("\n");
      }
      else {
      printf("you pick the wrong menu");
      }
       printf("\nback to menu(yes=1/no=0)?");
     scanf("%d",&Z);
    if(Z==1)
    {
        system("cls");
        goto menu;
    }
    else return(0);
    }

    case 9:
        printf("Thank you for using our program\n");
        return(0);

      default:
        printf("wrong input.");
        break;
    }
     printf("\nback to menu(yes=1/no=0)?");
     scanf("%d",&Z);
    if(Z==1)
    {
        system("cls");
        goto menu;
    }
    else return(0);
    return 0;
}
