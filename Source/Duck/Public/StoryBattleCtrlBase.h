#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "StoryBattleCtrlBase.generated.h"

UCLASS(Blueprintable)
class DUCK_API AStoryBattleCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AStoryBattleCtrlBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetCharaAction(int32 PlWorkNo, int32 ActionNo, float& OutActionFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaActionEnd(int32 PlWorkNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaActionNo(int32 PlWorkNo) const;
    
};

