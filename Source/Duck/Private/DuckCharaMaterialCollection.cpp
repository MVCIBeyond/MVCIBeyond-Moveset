#include "DuckModule.h"
#include "DuckCharaMaterialCollection.h"

ADuckCharaMaterialCollection::ADuckCharaMaterialCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Visual = NULL;
    this->MaterialParameter = NULL;
    this->MaterialParameterBattle = NULL;
    this->PostProcessVolume = NULL;
    this->NegapositiveMaterial = NULL;
    this->BlackScreenMaterial = NULL;
}


