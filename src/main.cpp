#include <iostream>
#include <string>
#include <vector>

#include "cpp-logging/include/logging.hpp"

int main(int argc, char** argv) {
  auto logger = logging::Logger("thing");
  logger.error("omg v0.2.0?");
  return 0;
}
