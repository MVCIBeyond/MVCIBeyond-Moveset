#pragma once
#include "Engine.h"
#include "HUDPartnerHistory.h"
#include "HUDTeamHistory.h"
#include "HUDRootHistory.generated.h"

USTRUCT()
struct DUCK_API FHUDRootHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDTeamHistory> mTeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDPartnerHistory> mPartnerData;
    
    FHUDRootHistory();
};

