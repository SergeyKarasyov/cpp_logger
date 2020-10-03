#include "Logger.hpp"

int main() {
  const auto logger = Logger::instance();
  logger.log("HELLO WORLD");
}