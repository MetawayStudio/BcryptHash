// Fill out your copyright notice in the Description page of Project Settings.


#include "BcryptBlueprintFunctionLibrary.h"
#include "lib_bcrypt.h"
#include <string>


void UBcryptBlueprintFunctionLibrary::CryptString(FString toCrypt, FString& returnString)
{
    std::string convertedString(TCHAR_TO_UTF8(*toCrypt));
    std::string cryptedString = bcrypt::generateHash(convertedString, 5);
    FString reconvertedString(cryptedString.c_str());
    returnString = reconvertedString;
}
void UBcryptBlueprintFunctionLibrary::CryptCompare(FString key, FString hash, bool & returnBool)
{
    returnBool = bcrypt::validatePassword(TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*hash));
}
