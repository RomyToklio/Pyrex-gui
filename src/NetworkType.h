#pragma once

#include <QObject>
#include <wallet/api/wallet2_api.h>

class NetworkType : public QObject
{
    Q_OBJECT

public:
    enum Type : uint8_t {
        MAINNET = Pyrexcoin::MAINNET,
        TESTNET = Pyrexcoin::TESTNET,
        STAGENET = Pyrexcoin::STAGENET
    };
    Q_ENUM(Type)
};
