/* @file PlatformConfigDataLibNull.c

  Null instance of PlatformConfigDataLib. Platform is expected to implement this library and
  supply autogenerated data structures.

  Copyright (c) Microsoft Corporation.

**/

#include <Uefi.h>
#include <ConfigStdStructDefs.h>

KNOB_DATA  gKnobData = { 0 };

UINTN  gNumKnobs = 0;

PROFILE  gProfileData = { 0 };

CHAR8  *gProfileFlavorName = { 0 };

UINTN  gNumProfiles = 0;