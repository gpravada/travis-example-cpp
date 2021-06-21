#include <stdio.h>
#include "mymath.hpp"

#define TEST_OK (0)
#define TEST_FAIL (-1)


/* ************************************************
	simple test cases for the library functions 
   ************************************************
*/


/*   test cases for AND function  */
int test_and() {
	MyMath clMyMath;
	if (clMyMath.Operator_AND(3,4) != (3&4))
		return TEST_FAIL;

	if (clMyMath.Operator_ADD(2,7) != (2&7))
		return TEST_FAIL;

	// un comment me to make this fail!
	//if ((f_ib_and(2,7) == (2&7))
	//	return TEST_FAIL;)

	return TEST_OK;
}

/*   test cases for OR function  */
int test_or() {
	MyMath clMyMath;
	if (clMyMath.Operator_OR(3,4) != (3|4)) 
		return TEST_FAIL;
	
	return TEST_OK;
}

/*   test cases for XOR function  */
int test_xor() {
	MyMath clMyMath;
	if (clMyMath.Operator_XOR(3,4) != ((3^4))) 
		return TEST_FAIL;
	return TEST_OK;
}


/*   test cases for XNOR function  */
int test_xnor() {
	MyMath clMyMath;
	if (clMyMath.Operator_XNOR(3,4) != (~(3^4))) 
		return TEST_FAIL;
	return TEST_OK;
}

/*   test cases for ADD function  */
int test_add() {
	MyMath clMyMath;
	if (clMyMath.Operator_ADD(3,4) != (3+4)) 
		return TEST_FAIL;
	return TEST_OK;
}


/*   test cases for SUB function  */
int test_sub() {
	MyMath clMyMath;
	if (clMyMath.Operator_SUB(3,4) != (3-4)) 
		return TEST_FAIL;
	return TEST_OK;
}


/*   test cases for MUL function  */
int test_mul() {
	MyMath clMyMath;
	if (clMyMath.Operator_MUL(3,4) != (3*4)) 
		return TEST_FAIL;
	return TEST_OK;
}

/* 	************************************************
	this is a simple test suite.  
	normally you would run cppUnit or some other 
	more general purpose test framework.
*/
int run_tests() {
	if (TEST_FAIL == test_and()) {
		printf("failed test_and()\n");
		return TEST_FAIL;
	}

	if (TEST_FAIL == test_or()) {
		printf("failed test_or()\n");
		return TEST_FAIL;
	}
	
	if (TEST_FAIL == test_xor()){
		printf("failed test_xor()\n");
		return TEST_FAIL;
	}

	if (TEST_FAIL == test_xnor()){
			printf("failed test_xnor()\n");
			return TEST_FAIL;
		}

	if (TEST_FAIL == test_add()){
			printf("failed test_add()\n");
			return TEST_FAIL;
		}

	if (TEST_FAIL == test_sub()){
			printf("failed test_sub()\n");
			return TEST_FAIL;
		}


	if (TEST_FAIL == test_mul()){
			printf("failed test_mul()\n");
			return TEST_FAIL;
		}

	return TEST_OK;
}


/* 
	This main function only runs all the test code.
    If successful it returns TEST_OK which is equal to the numerical value of 0.
 	Any other value is considered a failure.
 	
 */
int main()
{
	int result;
	
	printf("Running Example tests .. \n");
	result = run_tests();

	if (result == TEST_OK) 
		printf ("tests passed.\n");
	else
		printf ("tests failed.\n");

    return result;  /* remember the value 0 is considered passing in a travis-ci sense */

}