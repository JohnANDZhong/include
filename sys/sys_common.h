/**
 * @file sys_common.h
 * @author JohnnyWong (1426384536@qq.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef __SYS_COMMON_H__
#define __SYS_COMMON_H__

#include <stdio.h>
#define  OK 0
#define ERROR -1
typedef int INT32;

typedef unsigned int UINT32;

typedef double DOUBLE;

typedef float FLOAT;

typedef char INT8;

typedef unsigned char UINT8;

typedef long LONG;

typedef unsigned long ULONG;

typedef void VOID;

#define SYS_CHECK_VOID(x) if ((x) == NULL) { \
    fprintf(stderr, "\033[1;31mError: NULL reference %s:%d\033[0m\n", __FILE__, __LINE__); \
    return; \
}

#define SYS_CHECK_PTR_RET(x, ret) if ((x) == NULL) { \
    fprintf(stderr, "\033[1;31mError: NULL reference %s:%d\033[0m\n", __FILE__, __LINE__); \
    return (ret); \
}

#endif