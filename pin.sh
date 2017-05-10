#!/bin/bash

case "$1" in
  "first-build") cd build && cmake .. ;;
  "build")       cd build && make ;;
  "clean")       rm -r build && mkdir build && touch build/.gitkeep ;;
esac
