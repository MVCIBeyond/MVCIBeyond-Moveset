#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Engine/DataTable.h"
#include "EMirrorAxis.h"
#include "MirrorBoneListCSV.generated.h"

USTRUCT()
struct FMirrorBoneListCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString L_BONE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString R_BONE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMirrorAxis::Type> TRANSLATE_AXIS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMirrorAxis::Type> ROTATE_AXIS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ROTATOR_OFFSET;
    
    DUCK_API FMirrorBoneListCSV();
};

