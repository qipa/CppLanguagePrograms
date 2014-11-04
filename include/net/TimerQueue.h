// ***********************************************************************
// Filename         : TimerQueue.h
// Author           : LIZHENG
// Created          : 2014-10-126
// Description      :
//
// Last Modified By : LIZHENG
// Last Modified On : 2014-10-26
//
// Copyright (c) lizhenghn@gmail.com. All rights reserved.
// ***********************************************************************
#ifndef ZL_TIMERQUEUE_H
#define ZL_TIMERQUEUE_H
//#include <WinSock2.h>
#include "Define.h"
#include "base/NonCopy.h"
#include "thread/Mutex.h"
#include "thread/Thread.h"
NAMESPACE_ZL_NET_START

class Timer;

class TimerQueue
{
public:    
    TimerQueue();
    ~TimerQueue()
    {

    }
    void start();
    void stop();
    void addTimer(Timer * vtimer);
    void deleteTimer(Timer * vtimer);

private:    
    void addTimer_(Timer * vtimer);
    void deleteTimer_(Timer * vtimer);

private:
    void processThread(); //��ʱ���ӳ��߳�

    zl::thread::Mutex m_mutex;

    bool running_;
    zl::thread::Thread thread_;
    std::set<Timer*> timers_;
};

NAMESPACE_ZL_NET_END
#endif  /* ZL_TIMERQUEUE_H */