#ifndef BRIDGECLIENT_H
#define BRIDGECLIENT_H

#include <QObject>

class BridgeClient : public QObject
{
    Q_OBJECT
public:
    explicit BridgeClient(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // BRIDGECLIENT_H
