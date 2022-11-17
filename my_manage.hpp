#pragma once
#include <memory>
#include <vector>

#include "my_alg.hpp"
#include "my_macro.hpp"

class Manager {
private:
  std::vector<std::shared_ptr<NSPACE::MYNAMESPACE::ALG>> m_matchers;

public:
  Manager() = default;
  ~Manager() = default;

  template <typename T, class... Args>
  std::shared_ptr<T> add_matcher(Args &&... args) {
    auto pass = std::make_shared<T>(std::forward<Args>(args)...);
    m_matchers.push_back(pass);
    return pass;
  }

  template <typename T, class... Args>
  std::shared_ptr<T> add_matcher_3(Args &&... args) {
    auto pass = std::make_shared<T>(std::forward<Args>(args)...);
    m_matchers.push_back(pass);
    return pass;
  }

  template <typename T, class... Args>
  void add_matcher_4(std::string str = "default str") {
    std::cout << "str = " << str.c_str() << std::endl;
  }
};
