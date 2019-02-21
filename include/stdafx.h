// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: reference additional headers your program requires here

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/core/optim.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <chrono>
#include <iostream>
#include <string>
#include <spdlog/spdlog.h>
#include <omp.h>

#include <boost/lockfree/queue.hpp>
#include <boost/thread/condition_variable.hpp>
#include <boost/thread/mutex.hpp>



