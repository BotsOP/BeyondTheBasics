cmake_minimum_required(VERSION 3.23)
project(BeyondTheBasics)

set(CMAKE_CXX_STANDARD 23)

add_executable(BeyondTheBasics main.cpp BankRekening.cpp BankRekening.h BankTransactie.cpp BankTransactie.h)
