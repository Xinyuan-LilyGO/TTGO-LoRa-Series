#pragma once
#include "board_def.h"
#ifdef ENABLE_DS3231
String ds3231_test();
#else
#define ds3231_test() ""
#endif
