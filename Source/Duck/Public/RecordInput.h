#pragma once
#include "Engine.h"
#include "ESide.h"
#include "RecordInput.generated.h"

USTRUCT()
struct DUCK_API FRecordInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESide Side;
    
    FRecordInput();
};

