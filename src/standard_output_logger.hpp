#ifndef _LOGGER_STANDARD_H__
#define _LOGGER_STANDARD_H__

#include "logger.h"

class StandardLogger :public Logger
{
public:
  StandardLogger() = default;
  virtual ~StandardLogger() = default;
  template<class T>
  virtual void print(const T&) const override;
};

#endif // _LOGGER_STANDARD_H__

template<class T>
StandardLogger::print(const T& object)
{
  std::cout << object << std::endl; 
}
