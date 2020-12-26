// Copyright 2020 ak-kuznetsov <a.kuznetsov2701@mail.ru>

#ifndef INCLUDE_ACCOUNT_HPP_
#define INCLUDE_ACCOUNT_HPP_

#include "boost/filesystem.hpp"
#include "iostream"

class Account {
 private:
  std::string Brocker;
  std::string Account_Number;
  std::vector<boost::filesystem::path> Files;
  size_t Files_Sum = 0;
  int Last_Date;

 public:
  void Add_File(boost::filesystem::path);
  void Increment_Files_Sum();
  void Set_Last_Date(int);
  void Set_Brocker(std::string);
  void Set_Account_Number(std::string);
  std::string Get_Brocker();
  std::string Get_Account_Num();
  std::size_t Get_File_Sum();
  int Get_Last_Date();
};

#endif // INCLUDE_ACCOUNT_HPP_
