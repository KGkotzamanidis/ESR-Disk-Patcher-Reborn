#ifndef ERROR_H
#define ERROR_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum ErrorList{
    ESR_FILE_OK = 0,
    ESR_FILE_CANNOT_OPEN = -1,
    ESR_FILE_ALREADY_PATCHED = -2,
    ESR_FILE_WRONG_FORMAT = -3,
    ESR_FILE_NO_UDF_DESCRIPTOR = -4,
    ESR_FILE_NOT_PATCHED = -5
};

#endif // ERROR_H
