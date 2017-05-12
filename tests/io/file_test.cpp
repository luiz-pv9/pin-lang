#include "io/file.h"
#include <assert.h>
#include <iostream>
#include "io/log.h"

void test_file_read() {
  std::string content =
      pin::File::read("../resources/examples/basic-module-01.pin");

  assert(content == "module Example.BasicModule01 exposing (..)");
}

void test_file_read_non_existing() {
  bool exceptionCaught = false;

  try {
    std::string content =
        pin::File::read("../resources/examples/non-existing-file.pin");

    assert(false);
  } catch (pin::FileNotFoundException e) {
    exceptionCaught = true;
  }

  assert(exceptionCaught);
}

int main(int argc, char** argv) {
  test_file_read();
  test_file_read_non_existing();

  pin::log.info() << "All tests have passed!";
  return 0;
}
