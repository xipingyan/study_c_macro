#include <iostream>
#include "my_macro.hpp"
#include "my_manage.hpp"
#include "my_alg.hpp"
#include "header.hpp"

#define OR_000 0
#define OR_001 1
#define OR_010 1
#define OR_100 1
#define CAT3_(OP1, OP2, OP3) OR_##OP1##OP2##OP3
#define CAT3(OP1, OP2, OP3) CAT3_(OP1, OP2, OP3)

#include <iostream>

void test_method_5()
{
  std::cout << "Method 5: ...\n";
#define PRINT(fun) std::cout << #fun << " = " << fun << std::endl;

  PRINT(CAT3(0, 0, 0))
  PRINT(CAT3(0, 0, 1))
  PRINT(CAT3(0, 1, 0))
  PRINT(CAT3(1, 0, 0))
}
