#pragma once
#include "Engine.h"
#include "SoundPlayerOnMemory.h"
#include "SoundPlayerFight.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundPlayerFight : public USoundPlayerOnMemory {
    GENERATED_BODY()
public:
    USoundPlayerFight();

};

