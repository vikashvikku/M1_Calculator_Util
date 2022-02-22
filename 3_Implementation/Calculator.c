#include <stdio.h>

#include "Cal.h"
#include "fact.c"

void main()
{
  int Calc;
  float valueOne, valueTwo;
  int operator1; 
  int operator2;
  int operator3;
  int operator4;
  int operator5;
  int operator6;
  printf("Enter 1 for Calculator\n");
  printf("Enter 2 for Maths Calculation\n");
  printf("Enter 3 for Trigonometric Calculation\n");
  printf("Enter 4 for Memory Conversion\n");
  printf("Enter 5 for Measurement Conversion\n");
  printf("Enter 6 for Currency Conversion\n");
  scanf("%d",&Calc);

  switch(Calc){
    case 1:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("Addition = 1 \n");
      printf("Subtraction = 2 \n");
      printf("Multiplication = 3 \n");
      printf("Division = 4 \n");
      printf("Modulo = 5 \n");
      printf("Square root = 6 \n");
      printf("Cube root = 7 \n");
      printf("Square = 8 \n");
      printf("Cube = 9 \n");
      printf("Inverse = 10 \n");
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator1);
      switch(operator1)
      {
        case 1: 
          // Addition
          printf("Enter Value 1 and Value 2:\n");
          scanf("%f %f", &valueOne, & valueTwo); 
          float answer3 = (valueOne)+(valueTwo);
          printf("Your Result of Addition is : %.2f\n", answer3);
          break;
        case 2:
          //Subtraction
          printf("Enter Value 1 and Value 2:\n");
          scanf("%f %f", &valueOne, & valueTwo); 
          float answer4 = (valueOne)-(valueTwo);
          printf("Your Result of Subtraction is : %.2f\n", answer4);
          break;
        case 3: 
          // Multiplication
          printf("Enter Value 1 and Value 2:\n");
          scanf("%f %f", &valueOne, & valueTwo); 
          float answer2 = (valueOne)*(valueTwo);
          printf("Your Result of Multiplication is : %.2f\n", answer2);
          break;
        case 4: 
          //Division
          printf("Enter Value 1 and  Value 2:\n");
          scanf("%f %f", &valueOne, & valueTwo); 
          float answer1 = (valueOne)/(valueTwo);
          printf("Your Result of division is : %.2f\n", answer1);
          break;
        case 5:
          // Modulo
          printf("Enter Value 1 and Value 2:\n");
          scanf("%f %f", &valueOne, & valueTwo); 
          int answer7 = (int)valueOne % (int)valueTwo;
          printf("Your Modulo value is : %d\n", answer7);
          break;
        case 6:
          //  Square root calculation 
          printf("Enter value: \n");
          scanf("%f", &valueOne);
          float valTwo = 0.5; 
          float ans_square = pow(valueOne, valTwo);
          printf("Your Result of Square Root is : %.2f\n", ans_square);
          break;
        case 7: 
          // Cube root calculation
          printf("Enter value: \n");
          scanf("%f", &valueOne);
          float valOne = 0.3333; 
          float ans_cube = pow(valueOne, valOne);
          printf("Your Result of Cube Root is : %.2f\n", ans_cube);
          break;
        case 8:
          //  Square calculation 
          printf("Enter value: \n");
          scanf("%f", &valueOne);
          float valtwo = 2; 
          float ans_square2 = pow(valueOne, valtwo);
          printf("Your Result of Square is : %.2f\n", ans_square2);
          break;
        case 9:
          //  Cube calculation 
          printf("Enter value: \n");
          scanf("%f", &valueOne);
          float valthree = 3; 
          float ans_square3 = pow(valueOne, valthree);
          printf("Your Result of Cube is : %.2f\n", ans_square3);
          break;
        case 10:
          //  Inverse calculation 
          printf("Enter value: \n");
          scanf("%f", &valueOne);
          float ans_inverse = 1 / valueOne;
          printf("Your Result of Inverse is : %.2f", ans_inverse);
          break; 
        default:
          printf("Fail\n");               
      }
      break;

//************
//**********
// Basic Mathematics Calculation:-
//*********
    case 2:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("LCM = 1 \n");
      printf("HCF = 2 \n");
      printf("Simple Interest = 3 \n");
      printf("Compound Interest = 4 \n");
      printf("log = 5 \n");
      printf("Integration = 6 \n");
      printf("Permutation =  7 \n");
      printf("Combination =  8 \n");
      // Operator Declaration for the calculation
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator2);
      // Starting of switch case for conditional statements.
      switch(operator2)
        {
          case 1:
            // LCM
            printf("Enter Value 1 and Value 2 for LCM :\n");
            scanf("%f %f", &valueOne, & valueTwo); 
            int v1 = (int)valueOne;
            int v2 = (int)valueTwo;
            int max = (v1 > v2) ? v1 : v2;
            while (1) {
              if (max % v1 == 0 && max % v2 == 0) {
                printf("The LCM of %d and %d is : %d\n", v1, v2, max);
                break;
              }
              ++max;
            }
            break;
          case 2:
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
              printf("H.C.F of %d and %d is : %d\n", val1, val2, HCF);
              break; 
          case 3:
            //Simple Interest
            printf("Enter Principle and Rate :\n");
            scanf("%f %f", &valueOne, & valueTwo); 
            int t;
            printf("Enter Time:\n");
            scanf("%d",&t);
            float SI = (valueOne * valueTwo * t)/100;
            printf("Your SI is : %.2f\n", SI);
            break;
          case 4:
            // Compound Interest
            printf("Enter Principle and Rate :\n");
            scanf("%f %f", &valueOne, & valueTwo); 
            int time;
            printf("Enter Time:\n");
            scanf("%d",&time);
            float CI = valueOne * pow((1 + valueTwo / 100), time) - valueOne;
            printf("Your CI is : %.2f\n", CI);
            break;               
          case 5: 
            // log value calculation of base e
            printf("Enter value: \n");
            scanf("%f", &valueOne); 
            float ans_log = log(valueOne);
            printf("Your Result of Logarithm is : %.2f\n", ans_log);
            break;
          case 6: 
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
              y = x * x + 2 * x - 4;
              sum += y * (valueTwo - valueOne) / N;
            }
            printf("Value of integration is :%.3f\n", sum);
            break;
          case 7:
            // Permutation calculation
            printf("Enter Value 1 and Value 2 : \n");
            scanf("%f %f", &valueOne, &valueTwo);
            float npr=fact(valueOne)/fact(valueOne-valueTwo);
            printf("Result of Permutation is %.1f\n: ", npr);
            break;
          case 8:
            // Combination calculation
            printf("Enter Value 1 and Value 2 : \n");
            scanf("%f %f", &valueOne, &valueTwo);
            float ncr=fact(valueOne)/(fact(valueTwo)*fact(valueOne-valueTwo));
            printf("Result of Combination is %.1f\n: ", ncr);
            break;
          default:
            printf("Fail\n");
        }
        break;

//**********
//********
//******

    case 3:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("sin =  1\n");
      printf("cos =  2\n");
      printf("tan = 3\n");
      printf("cosec = 4\n");
      printf("sec = 5\n");
      printf("cot = 6\n");
      // Operator Declaration for the calculation
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator3);
      // Starting of switch case for conditional statements.
      switch(operator3)
      {
        case 1:
          // Sin value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree1 = (3.14 / 180)*valueOne;
          float s = sin(degree1);
          printf("Sin value is %.2f\n", s);
          break;
        case 2:
          // Cos value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree2 = (3.14 / 180)*valueOne;
          float c = cos(degree2);
          printf("Cos value is %.2f\n", c);
          break;
        case 3:
          // Tan Value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree3 = (3.14 / 180)*valueOne;
          float tanval = tan(degree3);
          printf("Tan value is %.2f\n", tanval);
          break;
        case 4:
          // Cosec Value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree4 = (3.14 / 180)*valueOne;
          float sinvalue = sin(degree4);
          float cosecval = 1 / sinvalue;
          printf("Cosec value is %.2f\n", cosecval);
          break;
        case 5:
          // Sec Value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree5 = (3.14 / 180)*valueOne;
          float cosvalue = cos(degree5);
          float secval = 1 / cosvalue;
          printf("Tan value is %.2f\n", secval);
          break;
        case 6:
          // Cot Value calculation
          printf("Enter the value of angle in degree :\n");
          scanf("%f",& valueOne);
          float degree6 = (3.14 / 180)*valueOne;
          float tanvalue = tan(degree6);
          float cotval = 1 / tanvalue;
          printf("Tan value is %.2f\n", cotval);
          break;
        default:
          printf("Failed for Trigo Calculation\n");
      }
      break;

//*******
//***********
//*************

    case 4:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("Byte to bit = 1\n");
      printf("Kilobyte to byte = 2\n");
      printf("Megabyte to Kilobyte = 3\n");
      printf("Gigabyte to Megabyte = 4\n");
      printf("Terabyte to Gigabyte = 5\n");
      printf("Petabyte to Terabyte = 6\n");
      printf("Exabyte to Terabyte = 7\n");  
      printf("Zetabyte to Exabyte = 8\n");  
      printf("Yottabyte to Zetabyte = 9\n");      
      // Operator Declaration for the calculation
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator4);
      // Starting of switch case for conditional statements.
      switch(operator4)
      {
        case 1:
          printf("Enter the value in bits ");
          scanf("%f",&valueOne);
          float mmr1 = valueOne * 1024;
          printf("Your Value is %.1f Byte\n", mmr1);
          break;
        case 2:
          printf("Enter the value in Bytes ");
          scanf("%f",&valueOne);
          float mmr2 = valueOne * 1024;
          printf("Your Value is %.1f kb\n", mmr2);
          break;
        case 3:
          printf("Enter the value in kb ");
          scanf("%f",&valueOne);
          float mmr3 = valueOne * 1024;
          printf("Your Value is %.1f mb\n", mmr3);
          break;
        case 4:
          printf("Enter the value in mb ");
          scanf("%f",&valueOne);
          float mmr4 = valueOne * 1024;
          printf("Your Value is %.1f gb\n", mmr4);
          break;
        case 5:
          printf("Enter the value in gb ");
          scanf("%f",&valueOne);
          float mmr5 = valueOne * 1024;
          printf("Your Value is %.1f tb\n", mmr5);
          break;
        case 6:
          printf("Enter the value in tb ");
          scanf("%f",&valueOne);
          float mmr6 = valueOne * 1024;
          printf("Your Value is %.1f pb\n", mmr6);
          break;
        case 7:
          printf("Enter the value in pb ");
          scanf("%f",&valueOne);
          float mmr7 = valueOne * 1024;
          printf("Your Value is %.1f eb\n", mmr7);
          break;
        case 8:
          printf("Enter the value in eb ");
          scanf("%f",&valueOne);
          float mmr8 = valueOne * 1024;
          printf("Your Value is %.1f zb\n", mmr8);
          break;
        case 9:
          printf("Enter the value in zb ");
          scanf("%f",&valueOne);
          float mmr9 = valueOne * 1024;
          printf("Your Value is %.1f yb\n", mmr9);
          break;
        default:
        printf("Failed for memory conversion\n");
      }
      break;

//*******
//***********
//**************

    case 5:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("Centimetre to Millimetre = 1\n");
      printf("Millimetre to Centimetre = 2\n");
      printf("Decimetre to Centimetre = 3\n");
      printf("Centimetre to Decimetre = 4\n");
      printf("Metre to Decimetre = 5\n");
      printf("Decimetre to Metre = 6\n");
      printf("Decametre to Metre = 7\n");
      printf("Metre to Decametre = 8\n");
      printf("Hectometre to Decametre = 9\n");
      printf("Decametre to Hectometre = 10\n");
      printf("Kilometre to Hectametre = 11\n");
      printf("Hectometre to Kilometre = 12\n");
      // Operator Declaration for the calculation
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator5);
      // Starting of switch case for conditional statements.
      switch(operator5)
      {
        case 1:
          printf("Enter the value in cm ");
          scanf("%f",&valueOne);
          float msr1 = valueOne * 10;
          printf("Your Value is %.1f mm\n", msr1);
          break;
        case 2:
          printf("Enter the value in mm ");
          scanf("%f",&valueOne);
          float msr2 = valueOne / 10;
          printf("Your Value is %.1f cm\n", msr2);
          break;
        case 3:
          printf("Enter the value in dm ");
          scanf("%f",&valueOne);
          float msr3 = valueOne * 10;
          printf("Your Value is %.1f cm\n", msr3);
          break;
        case 4:
          printf("Enter the value in cm ");
          scanf("%f",&valueOne);
          float msr4 = valueOne / 10;
          printf("Your Value is %.1f dm\n", msr4);
          break;
        case 5:
          printf("Enter the value in m ");
          scanf("%f",&valueOne);
          float msr5 = valueOne * 10;
          printf("Your Value is %.1f dm\n", msr5);
          break;
        case 6:
          printf("Enter the value in dm ");
          scanf("%f",&valueOne);
          float msr6 = valueOne / 10;
          printf("Your Value is %.1f m\n", msr6);
          break;
        case 7:
          printf("Enter the value in dam ");
          scanf("%f",&valueOne);
          float msr7 = valueOne * 10;
          printf("Your Value is %.1f m\n", msr7);
          break;
        case 8:
          printf("Enter the value in m ");
          scanf("%f",&valueOne);
          float msr8 = valueOne / 10;
          printf("Your Value is %.1f cm\n", msr8);
          break;
        case 9:
          printf("Enter the value in hm ");
          scanf("%f",&valueOne);
          float msr9 = valueOne * 10;
          printf("Your Value is %.1f dam\n", msr9);
          break;
        case 10:
          printf("Enter the value in dam ");
          scanf("%f",&valueOne);
          float msr10 = valueOne / 10;
          printf("Your Value is %.1f hm\n", msr10);
          break;
        case 11:
          printf("Enter the value in km ");
          scanf("%f",&valueOne);
          float msr11 = valueOne * 10;
          printf("Your Value is %.1f hm\n", msr11);
          break;
        case 12:
          printf("Enter the value in hm ");
          scanf("%f",&valueOne);
          float msr12 = valueOne / 10;
          printf("Your Value is %.1f km\n", msr12);
          break;
        default:
          printf("Failed for measurement conversion\n");
      }
      break;

//*******
//***********
//****************

    case 6:
      printf("***  Welcome  to Calculator ***\n\n");
      printf("Rupees to Dollar = 1\n");
      printf("Dollar to Rupees = 2\n");
      printf("Rupees to Euro = 3\n");
      printf("Euro to Rupees = 4\n");
      printf("Rupees to Riyal= 5\n");
      printf("Riyal to Rupees = 6\n");
      printf("Rupees to Pond = 7\n");
      printf("Pond to Rupees = 8\n");
      // Operator Declaration for the calculation
      printf("Enter the calculation Operator\n");
      scanf("%d", &operator6);
      // Starting of switch case for conditional statements.
      switch(operator6)
      {
        case 1:
          printf("Enter the money in RS.");
          scanf("%f",&valueOne);
          float RS1 = valueOne / 75;
          printf("You have : $%.1f\n", RS1);
          break;
        case 2:
          printf("Enter the money in $");
          scanf("%f",&valueOne);
          float RS2 = valueOne * 75;
          printf("You have : RS.%.1f\n", RS2);
          break;
        case 3:
          printf("Enter the money in RS.");
          scanf("%f",&valueOne);
          float RS3 = valueOne / 86;
          printf("You have : Euro %.1f\n", RS3);
          break;
        case 4:
          printf("Enter the money in Euro");
          scanf("%f",&valueOne);
          float RS4 = valueOne * 86;
          printf("You have : Rs.%.1f\n", RS4);
          break;
        case 5:
          printf("Enter the money in RS.");
          scanf("%f",&valueOne);
          float RS5 = valueOne / 20;
          printf("You have : Riyal %.1f\n", RS5);
          break;
        case 6:
          printf("Enter the money in Riyal ");
          scanf("%f",&valueOne);
          float RS6 = valueOne * 20;
          printf("You have : RS.%.1f\n", RS6);
          break;
        case 7:
          printf("Enter the money in RS.");
          scanf("%f",&valueOne);
          float RS7 = valueOne / 101;
          printf("You have : Pond %.1f\n", RS7);
          break;
        case 8:
          printf("Enter the money in Pond");
          scanf("%f",&valueOne);
          float RS8 = valueOne * 101;
          printf("You have : RS.%.1f\n", RS8);
          break;
        default:
          printf("Sorry! You are not dialing right Value as per our system");
      }
      break;
      default:
        printf("Failed for Currecy conversion\n");
}
}
