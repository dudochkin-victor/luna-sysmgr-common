/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */




#ifndef __COMMON_H__
#define __COMMON_H__

#include <Qt>
// #define OVERRIDE_NEW to override the default implementation of new.  Doing
// so will allow the heap analysis tool to figure out who called new.
#undef OVERRIDE_NEW
#ifdef OVERRIDE_NEW

#include <new>
#include <cstring>
#include <cstdlib>

#define COMMON_PRIVATE_INLINE inline __attribute__((always_inline))
COMMON_PRIVATE_INLINE void* operator new(size_t size) { return malloc(size); }
COMMON_PRIVATE_INLINE void* operator new(size_t size, const std::nothrow_t&) throw() { return malloc(size); }
COMMON_PRIVATE_INLINE void operator delete(void* p) { free(p); }
COMMON_PRIVATE_INLINE void operator delete(void* p, const std::nothrow_t&) throw() { free(p); }
COMMON_PRIVATE_INLINE void* operator new[](size_t size) { return malloc(size); }
COMMON_PRIVATE_INLINE void* operator new[](size_t size, const std::nothrow_t&) throw() { return malloc(size); }
COMMON_PRIVATE_INLINE void operator delete[](void* p) { free(p); }
COMMON_PRIVATE_INLINE void operator delete[](void* p, const std::nothrow_t&) throw() { free(p); }
#endif

/*        // core navi keys
        Key_Gesture_Key_Range_Start = 0x01200000,
        Key_CoreNavi_Back = 0x01200001,
        Key_CoreNavi_Menu = 0x01200002,
        Key_CoreNavi_QuickLaunch = 0x01200003,
        Key_CoreNavi_Launcher = 0x01200004,
        Key_CoreNavi_SwipeDown = 0x01200005,
        Key_CoreNavi_Next = 0x01200006,
        Key_CoreNavi_Previous = 0x01200007,
        Key_CoreNavi_Home = 0x01200008,
        Key_CoreNavi_Meta = 0x01200009,
        Key_Flick = 0x01200010,
        Key_Gesture_Key_Range_End = 0x01200099,

        Key_Slider = 0x01200100,
        Key_Optical = 0x01200101,
        Key_Ringer = 0x01200102,
        Key_Power = 0x01200103, // Neither Key_PowerDown nor Key_PowerOff make sense for us to use.
        Key_HeadsetButton = 0x01200104,
        Key_Headset = 0x01200105,
        Key_HeadsetMic = 0x01200106,
        Key_Keyboard = 0x01200107,

        // keys for avrcp
        Key_MediaRepeatAll = 0x01200200,
        Key_MediaRepeatTrack = 0x01200201,
        Key_MediaRepeatNone = 0x01200202,
        Key_MediaShuffleOn = 0x01200203,
        Key_MediaShuffleOff = 0x01200204,
*/
namespace Qt {

static const Qt::Key Key_CoreNavi_Back = static_cast<Qt::Key>(0x01200001);
static const Qt::Key Key_CoreNavi_Menu = static_cast<Qt::Key>(0x01200002);
static const Qt::Key Key_CoreNavi_QuickLaunch = static_cast<Qt::Key>(0x01200003);
static const Qt::Key Key_CoreNavi_Launcher = static_cast<Qt::Key>(0x01200004);
static const Qt::Key Key_CoreNavi_SwipeDown = static_cast<Qt::Key>(0x01200005);
static const Qt::Key Key_CoreNavi_Next = static_cast<Qt::Key>(0x01200006);
static const Qt::Key Key_CoreNavi_Previous = static_cast<Qt::Key>(0x01200007);
static const Qt::Key Key_CoreNavi_Home = static_cast<Qt::Key>(0x01200008);

static const Qt::Key Key_Power = static_cast<Qt::Key>(0x01200103);
static const Qt::Key Key_Keyboard = static_cast<Qt::Key>(0x01200107);

}

#endif // __COMMON_H__
