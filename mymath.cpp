#include "mymath.hpp"

/* 
  The "libary" begins here!  
  Its just a bunch of simple functions for showing the test environment not any thing 'real'
*/
MyMath::MyMath()
{

}

MyMath::~MyMath()
{

}


/* integer add 			 */
int MyMath::Operator_ADD(int in1, int in2)
{
	return in1+in2;
}

/* integer sub 			 */
int MyMath::Operator_SUB(int in1, int in2)
{
	return in1-in2;
}

/* integer mul 			 */
int MyMath::Operator_MUL(int in1, int in2)
{
	return in1*in2;
}

/* integer bitwise AND */
int MyMath::Operator_AND(int in1, int in2)
{
	return in1&in2;
}

/* integer bitwise OR */
int MyMath::Operator_OR(int in1, int in2)
{
	return in1|in2;
}

/* integer bitwise XOR */
int MyMath::Operator_XOR(int in1, int in2)
{
	return in1^in2;
}

/* integer bitwise XNOR */
int MyMath::Operator_XNOR(int in1, int in2)
{
	return ~(in1^in2);
}

