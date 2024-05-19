#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "ParticlePathCSV.generated.h"

USTRUCT()
struct FParticlePathCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PARTICLE_NAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DEAD_PARTICLE_NAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LIGHT_PARTICLE_NAME;
    
    DUCK_API FParticlePathCSV();
};

