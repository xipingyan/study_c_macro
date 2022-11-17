#include <iostream>
#include "my_macro.hpp"
#include "my_manage.hpp"
#include "my_alg.hpp"
#include "header.hpp"

#include <iostream>

#define OV_PP_CAT_(x, y) x##y
#define OV_PP_CAT(x, y) OV_PP_CAT_(x, y)
#define OV_OR_ARG_PLACEHOLDER_1 1,
#define OV_OR_ARG_PLACEHOLDER_0
#define OV_FIRST_ARG_GET(val, ...) val
#define OV_OR_(arg1_or_junk, arg2_or_junk) OV_FIRST_ARG_GET(arg1_or_junk arg2_or_junk 0)
#define OV_OR_2(x, y) OV_OR_(OV_PP_CAT(OV_OR_ARG_PLACEHOLDER_, x), OV_PP_CAT(OV_OR_ARG_PLACEHOLDER_, y))
#define OV_OR_3(x, y, z) OV_OR_2(OV_OR_2(x, y), z)

void test_method_6()
{
  std::cout << "Method 6: ...\n";
#define PRINT(fun) std::cout << #fun << " = " << fun << std::endl;

  PRINT(OV_OR_3(0, 0, 0))
  PRINT(OV_OR_3(0, 0, 1))
  PRINT(OV_OR_3(0, 1, 0))
  PRINT(OV_OR_3(0, 1, 1))
  PRINT(OV_OR_3(1, 0, 0))
  PRINT(OV_OR_3(1, 0, 1))
  PRINT(OV_OR_3(1, 1, 0))
  PRINT(OV_OR_3(1, 1, 1))
}
