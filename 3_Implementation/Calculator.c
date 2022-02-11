#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 1000
int fact(int);
void main()
{
  // Declataion of Variable
  float valueOne, valueTwo;
  char operator;

        printf("Addition = + \n");
        printf("Subtraction = - \n");
        printf("Multiplication = * \n");
        printf("Division = / \n");
        printf("Modulo = % \n");
        printf("LCM = L \n");
        printf("HCF = H \n");
        printf("Simple Interest = S \n");
        printf("Compound Interest = C \n");
        printf("Integration = I \n");
        printf("power = ^ \n");
        printf("Square root =  4 \n");
        printf("Cube root =  5 \n");
        printf("sin =  s\n");
        printf("cos =  c\n");
        printf("tan = t\n");
        printf("log base e = l\n");
        printf("Permutation = p\n");
        printf("Combination = b\n");
        printf("Square = 2\n");
        printf("Cube = 3\n");
        printf("Inverse = i\n");
    // Operator Declaration for the calculation
    printf("Enter the calculation Operator\n");
    scanf("%c", &operator);
  // Starting of switch case for conditional statements.
    switch(operator)
    {
      case '+': 
      // Addition
        printf("Enter Value 1 and Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        float answer3 = (valueOne)+(valueTwo);
        printf("Your Result of Addition is : %.2f", answer3);
        break;
      case '-':
      //Subtraction
        printf("Enter Value 1 and Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        float answer4 = (valueOne)-(valueTwo);
        printf("Your Result of Subtraction is : %.2f", answer4);
        break;
      case '*': 
      // Multiplication
        printf("Enter Value 1 and Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        float answer2 = (valueOne)*(valueTwo);
        printf("Your Result of Multiplication is : %.2f", answer2);
        break;
      case '/': 
      //Division
        printf("Enter Value 1 and  Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        float answer1 = (valueOne)/(valueTwo);
        printf("Your Result of division is : %.2f", answer1);
        break;
      case '%':
      // Modulo
        printf("Enter Value 1 and Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        int answer7 = (int)valueOne % (int)valueTwo;
        printf("Your Modulo value is : %d", answer7);
        break;
      case 'L':
      // LCM
        printf("Enter Value 1 and Value 2 for LCM :\n");
        scanf("%f %c %f", &valueOne, &operator, & valueTwo); 
        int v1 = (int)valueOne;
        int v2 = (int)valueTwo;
        int max = (v1 > v2) ? v1 : v2;
        while (1) {
          if (max % v1 == 0 && max % v2 == 0) {
            printf("The LCM of %d and %d is : %d", v1, v2, max);
            break;
          }
          ++max;
        }
        break;
      case 'H':
      // HCF
        printf("Enter Value 1 and Value 2 for HCF :\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        int i, HCF;
        int val1 = (int)valueOne;
        int val2 = (int)valueTwo;
        for(i=1; i <= val1 && i <= val2; ++i)
          {
          // Checks if i is factor of both integers
            if(val1%i==0 && val2%i==0)
              HCF = i;
          }
        printf("H.C.F of %d and %d is : %d", val1, val2, HCF);
        break; 
      case 'S':
      //Simple Interest
        printf("Enter Principle and Rate :\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        int t;
        printf("Enter Time:\n");
        scanf("%d",&t);
        float SI = (valueOne * valueTwo * t)/100;
        printf("Your SI is : %.2f", SI);
        break;
      case 'C':
      // Compound Interest
        printf("Enter Principle and Rate :\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        int time;
        printf("Enter Time:\n");
        scanf("%d",&time);
        float CI = valueOne * pow((1 + valueTwo / 100), time) - valueOne;
        printf("Your CI is : %.2f", CI);
        break;               
      case 'I':
      // Definite Integration 
        printf("Enter Value 1 and Value 2:\n");
        scanf("%f %f", &valueOne, & valueTwo); 
        float j, sum = 0;
        int x, y;
        if (valueOne > valueTwo) {
          j = valueOne;
          valueOne = valueTwo;
          valueTwo = j;
        }
        for (j = valueOne; j < valueTwo; j += (valueTwo - valueOne) / N) {
          /* Define your function below, and include the suitable header files */
          y = x * x + 2 * x - 4;
          sum += y * (valueTwo - valueOne) / N;
        }
        printf("Value of integration is :%.3f", sum);
        break;
      case '^': 
      // Power Value
        printf("Enter Number and Power value:\n");
        scanf("%f %f", &valueOne, & valueTwo);  
        float answer5 = pow(valueOne, valueTwo);
        printf("Your Result of Power is : %.2f", answer5);
        break;
      case '4':
        //  Square root calculation 
        printf("Enter value: \n");
        scanf("%f", &valueOne);
        float valTwo = 0.5; 
        float ans_square = pow(valueOne, valTwo);
        printf("Your Result of Square Root is : %.2f", ans_square);
        break;
      case '5': 
        // Cube root calculation
        printf("Enter value: \n");
        scanf("%f", &valueOne);
        float valOne = 0.3333; 
        float ans_cube = pow(valueOne, valOne);
        printf("Your Result of Cube Root is : %.2f", ans_cube);
        break;
      case 's':
        // Sin value calculation
        printf("Enter the value of angle in degree :\n");
        scanf("%f",& valueOne);
        float degree1 = (3.14 / 180)*valueOne;
        float s = sin(degree1);
        printf("Sin value is %.2f", s);
        break;
      case 'c':
        // Cos value calculation
        printf("Enter the value of angle in degree :\n");
        scanf("%f",& valueOne);
        float degree2 = (3.14 / 180)*valueOne;
        float c = cos(degree2);
        printf("Cos value is %.2f", c);
        break;
      case 't':
        // Tan Value calculation
        printf("Enter the value of angle in degree :\n");
        scanf("%f",& valueOne);
        float degree3 = (3.14 / 180)*valueOne;
        float tanval = tan(degree3);
        printf("Tan value is %.2f", tanval);
        break;
      case 'l': 
        // log value calculation of base e
        printf("Enter value: \n");
        scanf("%f", &valueOne); 
        float ans_log = log(valueOne);
        printf("Your Result of Logarithm is : %.2f", ans_log);
        break;
      case 'p':
        // Permutation calculation
        printf("Enter Value 1 and Value 2 : \n");
        scanf("%f %f", &valueOne, &valueTwo);
        float npr=fact(valueOne)/fact(valueOne-valueTwo);
        printf("Result of Permutation is %.1f: ", npr);
        break;
      case 'b':
        // Permutation calculation
        printf("Enter Value 1 and Value 2 : \n");
        scanf("%f %f", &valueOne, &valueTwo);
        float ncr=fact(valueOne)/(fact(valueTwo)*fact(valueOne-valueTwo));
        printf("Result of Permutation is %.1f: ", ncr);
        break;
      case '2':
        //  Square calculation 
        printf("Enter value: \n");
        scanf("%f", &valueOne);
        float valtwo = 2; 
        float ans_square2 = pow(valueOne, valtwo);
        printf("Your Result of Square is : %.2f", ans_square2);
        break;
      case '3':
        //  Cube calculation 
        printf("Enter value: \n");
        scanf("%f", &valueOne);
        float valthree = 3; 
        float ans_square3 = pow(valueOne, valthree);
        printf("Your Result of Cube is : %.2f", ans_square3);
        break;
      case 'i':
        //  Square root calculation 
        printf("Enter value: \n");
        scanf("%f", &valueOne);
        float ans_inverse = 1 / valueOne;
        printf("Your Result of Inverse is : %.2f", ans_inverse);
        break;                
      default:
        printf("Fail");
    }
}
int fact(int valueOne)
{
    int i,f=1;
    for(i=1;i<=valueOne;i++)
    {
        f=f*i;
    }
    return f;
}