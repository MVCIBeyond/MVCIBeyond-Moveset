#pragma once
#include "Engine.h"
#include "ParticleList.generated.h"

class UParticleSystem;

USTRUCT()
struct DUCK_API FParticleList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ParticleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ParticleLightGeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UClass*> ParticleCableGeneratedClass;
    
    FParticleList();
};

