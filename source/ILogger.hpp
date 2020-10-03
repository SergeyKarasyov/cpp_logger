#pragma once

#include <string>

class ILogger {
public:
  virtual ~ILogger(){};
  virtual void log(const std::string &data) const = 0;
};
