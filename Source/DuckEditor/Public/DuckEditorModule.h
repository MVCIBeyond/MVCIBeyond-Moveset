// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "DuckActions.h"

#define TEKKENGAME_EDITOR_MODULE_NAME "DuckEditor"

class IDuckEditorModule : public IModuleInterface
{
public:
	virtual uint32 GetDuckAssetCategory() const = 0;
};

