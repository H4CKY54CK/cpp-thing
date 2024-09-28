#include <iostream>
#include <string>
#include <vector>

#include "cpp-logging/include/logging.hpp"

int main(int argc, char** argv) {
  auto logger = logging::Logger("thing");
  logger.error("oopsies");
  return 0;
}
