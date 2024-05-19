#pragma once
#include "Engine.h"
#include "EStoryTextSupportBufType.generated.h"

UENUM()
enum class EStoryTextSupportBufType : uint8 {
    TXT_SUPPORT_BUF_ATK_UP,
    TXT_SUPPORT_BUF_ATK_DOWN,
    TXT_SUPPORT_BUF_DEF_UP,
    TXT_SUPPORT_BUF_HC_GAUGE_INC,
    TXT_SUPPORT_BUF_HC_GAUGE_DEC,
    TXT_SUPPORT_BUF_CONTINUED_DAMAGE,
};

