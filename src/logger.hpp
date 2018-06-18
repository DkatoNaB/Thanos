#ifndef _LOGGER_H__
#define _LOGGER_H__

#include <iostream>

class Logger
{
public:
  Logger() = default;
  virtual ~Logger() = default;

  template<class T>
  void print(const T& object) const  { std::cout << object; }
};

#endif // _LOGGER_H__
