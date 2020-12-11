#include <stdio.h>


float calIntFloat(int, char,float);
float calIntInt (int, char,int);
float calFloatFloat (float, char,float);

main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;


 while(1){
   printf("Enter operand1 operator operand2 separated by blanks>" );
   scanf( "%d %c %f",  &op1, &operator, &op2); // assign value to a b
  
   if (op1 == -1 && op2==-1) 
      break;
   resu = calIntFloat(op1, operator,op2);
   resu2 = calIntInt(op1,operator, op2); 
   resu3 = calFloatFloat(op1,operator, op2);

   printf("Your input '%d %c %f' result in %f (fun_IF) and %f (fun_II) and %f (fun_FF)\n\n",op1, operator, op2, resu,resu2, resu3);

 } 


}
 
float calIntFloat(int op1, char operator, float op2)
{
   float resu; 
   if(operator == '+')
     resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}

float calIntInt(int op1, char operator, int op2)
{  
   float resu;
   if(operator == '+')
     resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}

float calFloatFloat(float op1, char operator, float op2)
{
   float resu;
   if(operator == '+')
   resu = op1 + op2;
   else if (operator == '-')
     resu = op1 - op2;
   else if (operator == '*')
     resu = op1 * op2;
   else resu = op1 / op2;

   return resu;
}

/*
conversion happens in 1) arithmetic expression, 2)assignment,  3)function call, and 4)function return.
for 12 + 22.3024
In calII(), the 2nd actual argument is converted from float to int (case 3). so 12+22=34, then the int result is converted to float 34.0000 (case 2 or 4)
In calIF(), no conversion in argument, then in arithmetic expression 12+22.3024, 12 is promoted to 12.00000 (case 1). so 12.0000+22.3024
In calFF(), in function call, 12 is converted to float (case 3), so 12.00000+22.3024.
*/
