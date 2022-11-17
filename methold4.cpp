#include <iostream>
#include "my_macro.hpp"
#include "my_manage.hpp"
#include "my_alg.hpp"
#include "header.hpp"

#ifdef ENABLE_CC
#define PRE_ALG1 1
#define PRE_on_function_ALG1 0
#define PRE_ALG2 0
#define PRE_on_function_ALG2 1
#else
#define PRE_ALG1 0
#define PRE_ALG2 0
#endif

// Macros for names concatenation
#define OV_PP_CAT_(x, y)        x##y
#define OV_PP_CAT(x, y)         OV_PP_CAT_(x, y)


#define MY_CALL_1(p1, obj, ...) obj.add_matcher_4<p1>(__VA_ARGS__);
#define MY_CALL_0(p1, obj, ...)

#define MY_ONCE_CALL(F2, FLAG, obj, fun, ...) OV_PP_CAT(MY_CALL_, OV_PP_CAT(PRE_, OV_PP_CAT(fun, FLAG)))(F2::FLAG, obj, __VA_ARGS__)
using namespace NSPACE;

void test_method_4() {
  std::cout << "Method 4: ...\n";
  Manager m;
  MY_ONCE_CALL(MYNAMESPACE, ALG1, m, )
  MY_ONCE_CALL(MYNAMESPACE, ALG1, m, , "new str.")
  MY_ONCE_CALL(MYNAMESPACE, ALG1, m, on_function_)
  MY_ONCE_CALL(MYNAMESPACE, ALG2, m, )
  MY_ONCE_CALL(MYNAMESPACE, ALG2, m, on_function_)

  // m.add_matcher_3<MYNAMESPACE::ALG12345678903>();
  // m.add_matcher_3<MYNAMESPACE::ALG4>();
  // m.add_matcher_3<MYNAMESPACE::ALG5>();
}
