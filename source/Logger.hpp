#pragma once

#include <iostream>
#include <string>

class ILogger {
public:
  enum class LogLevel { INFO, WARNING, ERROR, NEVER_SKIP };

  virtual ~ILogger(){};
  virtual void log(const std::string &data,
                   const LogLevel level = LogLevel::INFO) const = 0;
};

class Logger : public ILogger {
private:
  LogLevel currentLogLevel = ILogger::LogLevel::INFO;

public:
  static Logger &instance() {
    static Logger instance;
    return instance;
  }
  void setLogLevel(ILogger::LogLevel value);
  virtual void
  log(const std::string &data,
      const ILogger::LogLevel level = ILogger::LogLevel::INFO) const override;
};
