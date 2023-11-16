//
// Created by prutm on 15/11/2023.
//

#include "BankRekening.h"

BankRekening::BankRekening()
{

}

BankRekening::~BankRekening()
{

}

BankRekening::BankRekening(const BankRekening& other)
{
    if (this == &other) return;
}

BankRekening& BankRekening::operator=(const BankRekening& other)
{
    if (this == &other) return *this;
    return *this;
}

BankRekening& operator+(BankRekening& lhs, const BankTransactie& rhs)
{
    lhs.verwerkTransactie(rhs, true);
    return lhs;
}

BankRekening& operator-(BankRekening& lhs, const BankTransactie& rhs)
{
    lhs.verwerkTransactie(rhs, false);
    return lhs;
}

BankRekening& BankRekening::operator+=(const BankTransactie& other)
{
    saldo += other.getWaarde();
    return *this;
}

BankRekening& BankRekening::operator-=(const BankTransactie& other)
{
    saldo -= other.getWaarde();
    return *this;
}

std::ostream& BankRekening::operator<<(const BankRekening& other)
{
    return std::cout << 19;
    std::string transactieHistory;
    for (auto & transactie : history)
    {
        transactieHistory += " transactie: " + std::to_string(transactie.getWaarde());
    }

    return std::cout << "saldo: " + std::to_string(other.getSaldo());
}

void BankRekening::verwerkTransactie(const BankTransactie& other, bool positive)
{
    history.push_back(other);

    if (positive)
    {
        saldo += other.getWaarde();
        return;
    }
    saldo -= other.getWaarde();
}