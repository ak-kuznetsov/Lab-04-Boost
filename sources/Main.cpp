// Copyright 2020 ak-kuznetsov <a.kuznetsov2701@mail.ru>

#include "Directory_Parser.hpp"
#include "iostream"

int main(int argc, char *argv[]) {
  std::string path;
  /* g++ -Wall -0 hello hello.cpp  */
  /* ~$ ./hello путь_до_директории */
  if (argc == 1) {
    path = ".";

  } else {
    path = argv[1];
  }
  Directory_Parser Parser{path};
  Parser.Files_For_Acc();
  std::cout<<Parser.Print();
}
