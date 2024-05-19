#include "DuckModule.h"
#include "SequencerSettingObj.h"

ASequencerSettingObj::ASequencerSettingObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraNearClipPlane = 10.00f;
}


