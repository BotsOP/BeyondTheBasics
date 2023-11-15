//
// Created by prutm on 15/11/2023.
//

#ifndef BEYONDTHEBASICS_BANKTRANSACTIE_H
#define BEYONDTHEBASICS_BANKTRANSACTIE_H


#pragma once
#include <string>

class BankTransactie{
private:
    size_t transactieDatum = 0;
    float transactieWaarde = 0;
public:
    BankTransactie(const float transactieWaarde, const size_t transactieDatum);
    BankTransactie(const BankTransactie& other);
    ~BankTransactie();
    BankTransactie& operator=(const BankTransactie& other);
    const float getWaarde() const { return transactieWaarde; };
    void setDatum(size_t date) { transactieDatum = date; };
    const size_t getDatum() const { return transactieDatum; };
};


#endif //BEYONDTHEBASICS_BANKTRANSACTIE_H
