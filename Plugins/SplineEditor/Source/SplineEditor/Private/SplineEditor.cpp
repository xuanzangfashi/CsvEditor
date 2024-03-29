// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SplineEditor.h"
#include "SplineEditorEdMode.h"

#define LOCTEXT_NAMESPACE "FSplineEditorModule"

void FSplineEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FSplineEditorEdMode>(FSplineEditorEdMode::EM_SplineEditorEdModeId, LOCTEXT("SplineEditorEdModeName", "SplineEditorEdMode"), FSlateIcon(), true);
}

void FSplineEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FSplineEditorEdMode::EM_SplineEditorEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSplineEditorModule, SplineEditor)