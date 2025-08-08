#include "global.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/opponents.h"

void ResetAllTrainerFlags(void)
{
    for (u16 i = 0; i < MAX_TRAINERS_COUNT; i++)
    {
        FlagClear(TRAINER_FLAGS_START + i);
    }
}
