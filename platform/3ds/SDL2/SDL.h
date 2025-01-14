#ifndef SDL_h_
#define SDL_h_

//#include "SDL_main.h"
#include "SDL_stdinc.h"
//#include "SDL_assert.h"
//#include "SDL_atomic.h"
#include "SDL_audio.h"
//#include "SDL_clipboard.h"
//#include "SDL_cpuinfo.h"
//#include "SDL_endian.h"
#include "SDL_error.h"
#include "SDL_events.h"
//#include "SDL_filesystem.h"
#include "SDL_gamecontroller.h"
//#include "SDL_haptic.h"
#include "SDL_hints.h"
#include "SDL_joystick.h"
//#include "SDL_loadso.h"
//#include "SDL_log.h"
//#include "SDL_messagebox.h"
//#include "SDL_metal.h"
//#include "SDL_mutex.h"
//#include "SDL_power.h"
#include "SDL_render.h"
//#include "SDL_rwops.h"
//#include "SDL_sensor.h"
//#include "SDL_shape.h"
//#include "SDL_system.h"
//#include "SDL_thread.h"
#include "SDL_timer.h"
//#include "SDL_version.h"
#include "SDL_video.h"
//#include "SDL_locale.h"
//#include "SDL_misc.h"

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif








#define SDL_INIT_TIMER          0x00000001u
#define SDL_INIT_AUDIO          0x00000010u
#define SDL_INIT_VIDEO          0x00000020u  /**< SDL_INIT_VIDEO implies SDL_INIT_EVENTS */
#define SDL_INIT_JOYSTICK       0x00000200u  /**< SDL_INIT_JOYSTICK implies SDL_INIT_EVENTS */
#define SDL_INIT_HAPTIC         0x00001000u
#define SDL_INIT_GAMECONTROLLER 0x00002000u  /**< SDL_INIT_GAMECONTROLLER implies SDL_INIT_JOYSTICK */
#define SDL_INIT_EVENTS         0x00004000u
#define SDL_INIT_SENSOR         0x00008000u
#define SDL_INIT_NOPARACHUTE    0x00100000u  /**< compatibility; this flag is ignored. */
#define SDL_INIT_EVERYTHING ( \
                SDL_INIT_TIMER | SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_EVENTS | \
                SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC | SDL_INIT_GAMECONTROLLER | SDL_INIT_SENSOR \
            ) //92

extern DECLSPEC int SDLCALL SDL_Init(Uint32 flags); //98

extern DECLSPEC void SDLCALL SDL_Quit(void); //128




/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif
#include "close_code.h"

#endif /* SDL_h_ */