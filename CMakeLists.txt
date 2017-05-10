CMAKE_MINIMUM_REQUIRED(VERSION 3.5.1)
PROJECT(pin-lang)

SET(CMAKE_CXX_STANDARD 11)

INCLUDE_DIRECTORIES(lib)

ADD_LIBRARY(pin-io
  ./lib/io/log.cpp
  ./lib/io/file.cpp)

ADD_LIBRARY(pin-make
  ./lib/make/lexer.cpp)

ADD_EXECUTABLE(pin-io-file-test ./tests/io/file_test.cpp)
TARGET_LINK_LIBRARIES(pin-io-file-test pin-io)

ADD_EXECUTABLE(pin-make-lexer-test ./tests/make/lexer_test.cpp)
TARGET_LINK_LIBRARIES(pin-make-lexer-test pin-make)
