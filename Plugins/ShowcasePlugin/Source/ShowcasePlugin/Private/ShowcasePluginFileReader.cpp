// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowcasePluginFileReader.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UShowcasePluginFileReader::ReadFile(FString FileName, FString& Result)
{
	return FFileHelper::LoadFileToString(Result, *(FPaths::ProjectDir() + FileName));
}