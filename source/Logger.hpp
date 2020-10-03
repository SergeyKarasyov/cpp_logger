#pragma once

#include "ILogger.hpp"
#include <iostream>
#include <string>

class Logger : public ILogger {
public:
  static Logger &instance() {
    static Logger *instance = new Logger();
    return *instance;
  }
  virtual void log(const std::string &data) const override;
};