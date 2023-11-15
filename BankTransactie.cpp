//
// Created by prutm on 15/11/2023.
//

#include "BankTransactie.h"


BankTransactie::BankTransactie(const float transactieWaarde, const size_t transactieDatum)
{
    this->transactieWaarde = transactieWaarde;
    this->transactieDatum = transactieDatum;
}

BankTransactie::BankTransactie(const BankTransactie& other)
{
    if (this == &other) return;
    transactieWaarde = other.transactieWaarde;
    transactieDatum = other.transactieDatum;
    return;
}

BankTransactie::~BankTransactie()
{
}

BankTransactie& BankTransactie::operator=(const BankTransactie& other)
{
    if (this == &other) return *this;
    transactieWaarde = other.transactieWaarde;
    transactieDatum = other.transactieDatum;
    return *this;
}
