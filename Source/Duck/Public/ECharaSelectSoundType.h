#pragma once
#include "Engine.h"
#include "ECharaSelectSoundType.generated.h"

UENUM()
enum class ECharaSelectSoundType : uint8 {
    CharaSelectSound_SELECT,
    CharaSelectSound_VERSUS,
    CharaSelectSound_SELECT_NA,
    CharaSelectSound_SELECT_VO,
};

