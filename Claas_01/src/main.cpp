#include <Arduino.h>

// global values
int temIndicator = 0; // Max value = -2,147,483,648 to + 2,147,483,647

unsigned int tem = 0; // Max Value =  2,147,483,648 to +2,147,483,647  = 0 to 4,294,967,295

float pessureIndicator = 0.00F; // Decimal points - 6 ( 1.123456)

double variable_01 = 0.00; // 1.123456789012345

const int distance_A_to_B = 1000;

const int temHome = 27; 

volatile float ultrasonicDistance = 0.00F; 

// operators (+ , - , * /, %)

// 1 byte = 0b00000000 // ( 7- 0)

// Ex-1 (2 days)
/*
<unsigned int>  Example
> unsigned int x = 0; // global variable
* setup()
> x = 4,294,967,200 // setup value

* loop()
> increment
> check the sign value of the varibale and give the solution to avoid

if above value is "(-)" then find the solution:
*/


//EX-2 (3 days)
/*
> Define any varible with const (const distance )
> use the const value to calculate following equations 
> a = 12
> b = 2147483649
> x = (a * b)+ (defined const)  
> Answer? 
*/

//Ex -3 (2 days)
/*

  z = x / y ;
  Serial.print("x / y = ");
  Serial.println(z);

  get the correct answer of Z ?
  Z = 1.2 
*/
int x = 0;
int y =0; 


void setup()
{
  Serial.begin(9600);
  temIndicator = 2147483600; // 2147483647 - 47 =
  tem = 2147483600;

  x = 12; 
  y = 10; 
}

void loop()
{
  // increment
  temIndicator = temIndicator + 1; // 2147483600 + 1 ----> 1st Loop
                                   // 2147483601 + 1 ----> 2nd Loop
  // 2147483602 + 1 ----> 3rd Loop

  tem = tem + 1; // 2147483600 + 1 ----> 1st Loop

  

  Serial.print("temIndicator Value : ");
  Serial.println(temIndicator);
  Serial.print("tem  Value : ");
  Serial.println(tem);


  /* *********************************** */
  // Operators
  int  z = x + y ;

  Serial.print("x + y = ");
  Serial.println(z);

  z = x * y ;
  Serial.print("x * y = ");
  Serial.println(z);

  z = x / y ;
  Serial.print("x / y = ");
  Serial.println(z);

  z = x % y ;
  Serial.print("x % y = ");
  Serial.println(z);

  delay(1000);
}

// 0777128667

