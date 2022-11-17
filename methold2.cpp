#include <iostream>
#include "my_macro.hpp"
#include "my_manage.hpp"
#include "my_alg.hpp"
#include "header.hpp"
using namespace NSPACE;
#ifdef ENABLE_CC
#define CONCAT2(x, y) x##y
#define CONCAT(x, y) CONCAT2(x, y)
#define MY_CALL_YES(p1) m.add_matcher<p1>();
#define MY_CALL_NO(p1)
#define MY_DEFINED_HELPER(a, b, c, ...) c
#define MY_DEFINED(...) MY_DEFINED_HELPER(__VA_ARGS__, YES, NO)
#define MY_CALL(FLAG, F2) CONCAT(MY_CALL_, MY_DEFINED(FLAG))(F2)
#else
#define MY_CALL(FLAG, F2) m.add_matcher<F2>();
#endif

void test_method_2() {
  std::cout << "Method 2: ...\n";
  Manager m;

  MY_CALL(MY_TEST_MACRO_ALG1, MYNAMESPACE::ALG1);
  MY_CALL(MY_TEST_MACRO_ALG2, MYNAMESPACE::ALG2);
  MY_CALL(MY_TEST_MACRO_ALG3, MYNAMESPACE::ALG12345678903);
}
