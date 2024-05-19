#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "PhysicsBoneListCSV.generated.h"

USTRUCT()
struct FPhysicsBoneListCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BONE_NAME;
    
    DUCK_API FPhysicsBoneListCSV();
};

