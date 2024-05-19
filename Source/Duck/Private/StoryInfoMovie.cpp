#include "DuckModule.h"
#include "StoryInfoMovie.h"
#include "DuckModule.h"
#include "EStoryInfoType.h"

UStoryInfoMovie::UStoryInfoMovie() {
    this->InfoType = EStoryInfoType::MOVIE;
    this->mpMsgDataTbl = NULL;
    this->mContinuousMovie = true;
    this->FadeInType = EMovieFadeInType::BLACK_10F;
    this->FadeOutType = EMovieFadeOutType::BLACK_30F;
    this->MovieEndWaitTime = 0.00f;
    this->CueStartTime = 0;
    this->VOEndTime = 0;
}


