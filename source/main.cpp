#include "Logger.hpp"

int main() {
  auto logger = Logger::instance();
  logger.log("HELLO WORLD");
  logger.log("HELLO WORLD INFO", ILogger::LogLevel::INFO);
  logger.log("HELLO WORLD WARNING", ILogger::LogLevel::WARNING);
  logger.log("HELLO WORLD ERROR", ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD NEVER_SKIP", ILogger::LogLevel::NEVER_SKIP);
  logger.setLogLevel(ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD INFO while level is ERROR", ILogger::LogLevel::INFO);
  logger.log("HELLO WORLD WARNING while level is ERROR", ILogger::LogLevel::WARNING);
  logger.log("HELLO WORLD ERROR while level is ERROR", ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD NEVER_SKIP while level is ERROR", ILogger::LogLevel::NEVER_SKIP);
}