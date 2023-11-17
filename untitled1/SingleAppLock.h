#ifndef SINGLEAPPLOCK_H
#define SINGLEAPPLOCK_H
#include <QString>
#include <QSharedMemory>
#include <QSystemSemaphore>
class SingleAppLock{
public:
    static SingleAppLock& getInstance();
    ~SingleAppLock();
private:
    explicit SingleAppLock();
    SingleAppLock(const SingleAppLock&) = delete;
    SingleAppLock& operator=(const SingleAppLock&) = delete;
    bool tryToRun();
    void release();
    const QString memLockKey;
    const QString sharedmemKey;

    QSystemSemaphore memLock;
    QSharedMemory sharedMem;



};
#endif // SINGLEAPPLOCK_H
