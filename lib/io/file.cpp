#include "io/file.h"

std::string pin::File::read(const std::string& path) 
{
  std::ifstream file(path);

  if(!file.is_open()) {
    throw FileNotFoundException(path);
  }

  std::stringstream buffer;
  buffer << file.rdbuf();
  
  return buffer.str();
}