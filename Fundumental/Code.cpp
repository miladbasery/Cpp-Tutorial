//c++ is oop programming language , strong and flexible you can create everything 
//maximum character is 255
// there is 6 type of data : bool(logical : True , False) , void(idk) , duoble(f-big-number : 4372432.6) , float(f-number : 89.34) , int(number : 568) , char(character : g)

//variable || data type   variable name ;
int x;
long int x , y , z ;
double v , w ;

//pre-input num || data type  variable name = value ;
int a , b = 5 ;
bool a , c = true ;
bool b , f = false ;

//input in c++ || cin >> variable name ;
int x , y ;
cin >> x >> y ;

//Constants || use #define or const || #define (const name)  value || const data type  const name = value ;
#define PI 3.17
const int x = 100 , count = 200 ;
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//operators are the symbols that operate on values to perform specific mathematical or logical computations on given values ; 
// Arithmetic Operators || Relational Operators || Logical Operators || Bitwise Operators || Assignment Operators || Ternary or Conditional Operators

// Arithmetic Operators
int x , y , z ;
m = x + y         //sum
m = x - y         //Subtraction
m = x * y         //Multiplication
m = x / y         //Division
m = x % y         //Division remainder
m = --x || x--    //decrement
m = ++x || ++x    //increment


//Relational operators are used for the comparison of the values of two operands
x > y   //Greater Than
x >= y  //Greater Than or Equal To
x < y   //Less Than
x <= y  //Less Than or Equal To
x == y  //Is Equal To
x !+ y  //Not Equal To

//logical Oprators 
bool x , y , z ;
x = y!  //not 
x || y  //or
x && y  //and

//Bitwise Operator 
int x , y ;
x += y //sum
x -= y //substraction
x *= y //multipliction
x /= y //division
x %= y //division remainder

//Assignment Operators
unsigned char x , y ;
x & y //and  
x | y //or
x ^ y //xor
x ~ y //not
x >> y  //right shift
x << y  //left shift

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Ternary or Conditional Operators
<< ? >> Oprators
varaible = txt1 ? txt2 : txt3 ;
if its True txt1 , so txt2 run , else txt3 run
//example 
int x , y ;
x = 5
y = x > 5 ? x * 6 : x ** 4

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

<< , >> Oprators
varaible = (txt1 , txt2) ;

//example
int x , y ;
y = (x = 2 , x**5/20) ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

<< sizeof >> Oprators

sizeof variable ;  //x = sizeof y ;
sizeof data type ; //x = sizeof (float) ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Operator Precedence

| Operator               | Type                    | Direction     |
|------------------------|-------------------------|---------------|
| ()                     | Parentheses             | -             |
| ++, --, +, -           | Unary                   | Right to Left |
| *, /, %                | Multiplication/Division | Left to Right |
| +, -                   | Addition/Subtraction    | Left to Right |
| <, <=, >, >=           | Comparison              | Left to Right |
| ==, !=                 | Equality                | Left to Right |
| &&                     | Logical AND             | Left to Right |
| ||                     | Logical OR              | Left to Right |
| =, +=, -=, *=, /=      | Assignment              | Right to Left |

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//how we can run a simple project - simple structure project 
#include <file>  //head-file = #include <iostream>
int main ()      //main-function = variable type is integer
{                //start {
	variable
	commands
	return 0;    //refunction is correct
}                //end  }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//space name - std space name
//use in after #include structure for better coding 
//example
using namespace std ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

















