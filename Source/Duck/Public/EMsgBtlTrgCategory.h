#pragma once
#include "Engine.h"
#include "EMsgBtlTrgCategory.generated.h"

UENUM()
enum class EMsgBtlTrgCategory : uint8 {
    MSG_BTL_TRG_CAT_CMN,
    MSG_BTL_TRG_CAT_OPPONENT_GROUP,
    MSG_BTL_TRG_CAT_OPPONENT_PERSON,
    MSG_BTL_TRG_CAT_PARTNER_GROUP,
    MSG_BTL_TRG_CAT_PARTNER_PERSON,
    MSG_BTL_TRG_CAT_NONE,
};

