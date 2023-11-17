#include <SingleAppLock.h>

SingleAppLock &SingleAppLock::getInstance()
{
    static SingleAppLock instance;
    return instance;
}

SingleAppLock::SingleAppLock():memLockKey("_memLock"),sharedmemKey("_sharedmemKey"),memLock(memLockKey,1),sharedMem(sharedmemKey)
{

}

SingleAppLock::~SingleAppLock(){

}
