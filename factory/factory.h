#ifndef FACTORY_H
#define FACTORY_H

#include "sys_common.h"
#include "sys_logger.h"

typedef struct Singleton {
    UINT8* name;
    void* pData;
} Singleton;

INT32 init_factory_component();
INT32 register_factory_component(const UINT8* IID, VOID* pFactory);
VOID *get_factory_component(const UINT8* IID);

#endif
