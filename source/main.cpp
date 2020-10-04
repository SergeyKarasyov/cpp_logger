#include "Logger.hpp"
#include <thread>

void runPrint() {
  auto logger = Logger::instance();
  logger.log("HELLO WORLD");
  logger.log("HELLO WORLD INFO", ILogger::LogLevel::INFO);
  logger.log("HELLO WORLD WARNING", ILogger::LogLevel::WARNING);
  logger.log("HELLO WORLD ERROR", ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD NEVER_SKIP", ILogger::LogLevel::NEVER_SKIP);
  logger.setLogLevel(ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD INFO while level is ERROR", ILogger::LogLevel::INFO);
  logger.log("HELLO WORLD WARNING while level is ERROR",
             ILogger::LogLevel::WARNING);
  logger.log("HELLO WORLD ERROR while level is ERROR",
             ILogger::LogLevel::ERROR);
  logger.log("HELLO WORLD NEVER_SKIP while level is ERROR",
             ILogger::LogLevel::NEVER_SKIP);
}

int main() {
  runPrint();
  std::thread t1(&runPrint);
  t1.join();
    std::thread t2(&runPrint);
    t2.join();
    std::thread t3(&runPrint);
    t3.join();
    std::thread t4(&runPrint);
    t4.join();
    std::thread t5(&runPrint);
    t5.join();
    std::thread t6(&runPrint);
    std::thread t7(&runPrint);
    t7.join();
    t6.join();
}
