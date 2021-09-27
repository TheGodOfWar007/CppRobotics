#pragma once

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#define _USE_MATH_DEFINES
#endif

#include <robotics/common.h>
#include <robotics/linear-control/linear-control.h>
#include <robotics/estimation/estimation.h>
#include <robotics/system/system.h>
#include <robotics/classical-control/classical-control.h>