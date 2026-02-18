#include <libdl/player.h>
#include <libdl/utils.h>
#include "utils.h"
#include "shared.h"

//--------------------------------------------------------------------------
void gambitHyperinflationTick(void)
{
  static int lastRoundNo = 0;
  if (MapConfig.State->RoundEndTime == 0 && lastRoundNo != MapConfig.State->RoundNumber) {
    lastRoundNo = MapConfig.State->RoundNumber;

    int i;
    for (i = 0; i < GAME_MAX_PLAYERS; ++i) {
      MapConfig.State->PlayerStates[i].State.Bolts = 0;
    }
  }
}
