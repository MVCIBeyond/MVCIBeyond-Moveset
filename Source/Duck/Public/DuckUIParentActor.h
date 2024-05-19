#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DuckUIParentActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class DUCK_API ADuckUIParentActor : public AActor {
    GENERATED_BODY()
public:
    ADuckUIParentActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWithTitleUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetCtrlFlg_DetachDisable(bool FlgOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreComponentBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void ChildComSetVisibility(USceneComponent* pCom, bool flgVisibleOn, bool flgPropagateChildren);
    
    UFUNCTION(BlueprintCallable)
    void ChildComReflectStockParamAll();
    
    UFUNCTION(BlueprintCallable)
    void ChildComReflectStockParam(USceneComponent* pCom);
    
    UFUNCTION(BlueprintCallable)
    void ChildComInitialize();
    
    UFUNCTION(BlueprintCallable)
    void ChildComFinalize();
    
    UFUNCTION(BlueprintCallable)
    void ChildComCaptureStockParam();
    
};

