// Recursive Inclusion
#ifndef MYMATH_HPP
#define MYMATH_HPP


// code
class MyMath
{
public:
   MyMath();
   ~MyMath();

   int Operator_AND(int in1, int in2);
   int Operator_OR(int in1, int in2);
   int Operator_XOR(int in1, int in2);
   int Operator_XNOR(int in1, int in2);
   int Operator_ADD(int in1, int in2);
   int Operator_SUB(int in1, int in2);
   int Operator_MUL(int in1, int in2);

private:
};

#endif
