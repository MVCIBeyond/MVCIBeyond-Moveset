#include "DuckModule.h"
#include "DemoCineCameraComponent.h"

UDemoCineCameraComponent::UDemoCineCameraComponent() {
    this->FilmbackPresets.AddDefaulted(13);
    this->LensPresets.AddDefaulted(9);
    this->OfsFOV = 0.00f;
}


