#include "Logger.hpp"

void Logger::log(const std::string &data, const ILogger::LogLevel level) const {
  if (level >= Logger::currentLogLevel) {
    std::cout << data << std::endl;
  }
}

void Logger::setLogLevel(ILogger::LogLevel value) {
  Logger::currentLogLevel = value;
}
