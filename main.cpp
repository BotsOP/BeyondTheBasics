#include <iostream>
#include "BankRekening.h"

int main()
{
    BankRekening rekening;
    BankTransactie transactie1(10, 0);
    BankTransactie transactie2(15, 1);
    BankTransactie transactie3(5, 1);
    rekening += transactie1;

    std::cout << &rekening << std::endl;
    return 0;
}
