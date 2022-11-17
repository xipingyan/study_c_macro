#include "header.hpp"
#include "my_alg.hpp"
#include "my_macro.hpp"
#include "my_manage.hpp"
#include <iostream>
using namespace NSPACE;
void test_method_1() {
  std::cout << "Start: test_method_1" << std::endl;
  Manager m;

  std::cout << "Method 1: ...\n";

#if not  defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG1>();
#elif defined(MY_TEST_MACRO_ALG1)	
  m.add_matcher<MYNAMESPACE::ALG1>();
#endif

  
#if not  defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG1>();
#elif defined(MY_TEST_MACRO_ALG2)	
  m.add_matcher<MYNAMESPACE::ALG2>();
#endif

#if not  defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG12345678903>();
#elif defined(MY_TEST_MACRO_ALG1)	
  m.add_matcher<MYNAMESPACE::ALG12345678903>();
#endif

#if defined(MY_TEST_MACRO_ALG1) || not defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG1>();
#endif

#if defined(MY_TEST_MACRO_ALG2) || not defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG2>();
#endif

#if defined(MY_TEST_MACRO_ALG3)  || not defined(ENABLE_CC)
  m.add_matcher<MYNAMESPACE::ALG12345678903>();
#endif
}
