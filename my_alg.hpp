#pragma once
#include <memory>

#define CAT_HELPER(lhs, rhs) lhs ## rhs
#define CAT(lhs, rhs) CAT_HELPER(lhs, rhs)
namespace NSPACE {
namespace MYNAMESPACE {
  
class ALG {
private:
public:
  ALG() = default;
  ~ALG() = default;
};

class ALG1 : public ALG {
private:
public:
  ALG1() { std::cout << "ALG1 is called.\n"; }
  ~ALG1() = default;
};

class ALG2 : public ALG {
private:
public:
  ALG2() { std::cout << "ALG2 is called.\n"; }
  ~ALG2() = default;
};

class ALG12345678903 : public ALG {
private:
public:
  ALG12345678903() { std::cout << "ALG3 is called.\n"; }
  ~ALG12345678903() = default;
};

class ALG4 : public ALG {
private:
public:
  ALG4() { std::cout << "ALG4 is called.\n"; }
  ~ALG4() = default;
};

class ALG5 : public ALG {
private:
public:
  ALG5() { std::cout << "ALG5 is called.\n"; }
  ~ALG5() = default;
};

}
}