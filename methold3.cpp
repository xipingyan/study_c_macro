#include <iostream>
#include "my_macro.hpp"
#include "my_manage.hpp"
#include "my_alg.hpp"
#include "header.hpp"

using namespace NSPACE;

#ifdef ENABLE_CC
#define PRE_ALG1 1
#define PRE_ALG2 0
#else
#define PRE_ALG1 0
#define PRE_ALG2 0
#endif

// #define MY_ONCE_CALL(OBJ, SCOPE, NSPACE) (OBJ).add_matcher_3<NSPACE::SCOPE>();

#define CONCAT2(x, y) x##y
#define CONCAT(x, y) CONCAT2(x, y)

#define CONCAT3(x, y, z) x##y##z
#define CONCAT_3(x, y, z) CONCAT3(x, y, z)

#define _XX_FUNC add_matcher_3
#define OBJ_XX_FUNC .add_matcher_3

#define MY_CALL_1(p1, obj) obj.add_matcher_3<p1>();
#define MY_CALL_0(p1, obj)

#define MY_CALL_D_1(p1) add_matcher_3<p1>();
#define MY_CALL_D_0(p1)

#define MY_ONCE_CALL(F2, FLAG, obj) CONCAT(MY_CALL_, CONCAT(PRE_, FLAG))(CONCAT(F2, FLAG), obj)


template <class T>
void add_matcher_3(T x)
{
  std::cout << "stand fucntion" << std::endl;
}

void test_method_3() {
  std::cout << "Method 3: ...\n";
  Manager m;
  m.add_matcher_3<MYNAMESPACE::ALG1>();
  m.add_matcher_3<MYNAMESPACE::ALG2>();
  m.add_matcher_3<MYNAMESPACE::ALG12345678903>();
  m.add_matcher_3<MYNAMESPACE::ALG4>();
  m.add_matcher_3<MYNAMESPACE::ALG5>();
}
