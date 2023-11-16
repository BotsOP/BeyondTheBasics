//
// Created by prutm on 15/11/2023.
//

#ifndef BEYONDTHEBASICS_BANKREKENING_H
#define BEYONDTHEBASICS_BANKREKENING_H

#pragma once
#include "BankTransactie.h"
#include <iostream>
#include <vector>

class BankRekening {
private:
    float saldo = 0;
    std::vector<BankTransactie> history;
public:
    BankRekening();
    ~BankRekening();
    BankRekening(const BankRekening& other);
    BankRekening& operator=(const BankRekening& other);
    friend BankRekening& operator+(BankRekening& lhs, const BankTransactie& rhs);
    friend BankRekening& operator-(BankRekening& lhs, const BankTransactie& rhs);
    BankRekening& operator+=(const BankTransactie& other);
    BankRekening& operator-=(const BankTransactie& other);
    std::ostream& operator<<(const BankRekening& other);
    const float getSaldo() const { return saldo; };
    void verwerkTransactie(const BankTransactie& transactie, bool positive);
};


#endif //BEYONDTHEBASICS_BANKREKENING_H
