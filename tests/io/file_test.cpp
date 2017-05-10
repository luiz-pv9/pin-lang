#include "io/file.h"
#include "io/log.h"
#include <assert.h>
#include <iostream>

int test_file_read()
{
  std::string content = 
    pin::File::read("../resources/examples/basic-module-01.pin");

  assert(content == "module Example.BasicModule01 exposing (..)");
}

int test_file_read_non_existing()
{
  std::string content =
    pin::File::read("../resources/examples/non-existing-file.pin");

  pin::log.highlight(content);
}

int main(int argc, char** argv)
{
  test_file_read();
  test_file_read_non_existing();

  pin::log.info("All tests have passed!");
  return 0;
}