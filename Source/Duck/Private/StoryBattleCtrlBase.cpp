#include "DuckModule.h"
#include "StoryBattleCtrlBase.h"

AStoryBattleCtrlBase::AStoryBattleCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AStoryBattleCtrlBase::SetCharaAction(int32 PlWorkNo, int32 ActionNo, float& OutActionFrame) {
    return false;
}

bool AStoryBattleCtrlBase::IsCharaActionEnd(int32 PlWorkNo) const {
    return false;
}

int32 AStoryBattleCtrlBase::GetCharaActionNo(int32 PlWorkNo) const {
    return 0;
}


