#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "EDuckLoadPrio.h"
#include "FlowPreLoader.generated.h"

class ULoadAssets;

UCLASS(Blueprintable)
class DUCK_API AFlowPreLoader : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mArrLoadAssets;
    
public:
    AFlowPreLoader(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnloadSpecifiedName(const FString& PackName);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnload();
    
    UFUNCTION(BlueprintCallable)
    bool RequestAsyncLoad(const FString& PackName, EDuckLoadPrio Prio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncLoadEnd() const;
    
};

