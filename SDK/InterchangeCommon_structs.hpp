#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeCommon

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangeCommon.EInterchangeMaterialXShaders
// NumValues: 0x0009
enum class EInterchangeMaterialXShaders : uint8
{
	OpenPBRSurface                           = 0,
	OpenPBRSurfaceTransmission               = 1,
	StandardSurface                          = 2,
	StandardSurfaceTransmission              = 3,
	SurfaceUnlit                             = 4,
	UsdPreviewSurface                        = 5,
	Surface                                  = 6,
	MaxShaderCount                           = 7,
	EInterchangeMaterialXShaders_MAX         = 8,
};

// Enum InterchangeCommon.EInterchangeMaterialXBSDF
// NumValues: 0x000B
enum class EInterchangeMaterialXBSDF : uint8
{
	OrenNayarDiffuse                         = 0,
	BurleyDiffuse                            = 1,
	Translucent                              = 2,
	Dielectric                               = 3,
	Conductor                                = 4,
	GeneralizedSchlick                       = 5,
	Subsurface                               = 6,
	Sheen                                    = 7,
	ThinFilm                                 = 8,
	MaxBSDFCount                             = 9,
	EInterchangeMaterialXBSDF_MAX            = 10,
};

// Enum InterchangeCommon.EInterchangeMaterialXEDF
// NumValues: 0x0005
enum class EInterchangeMaterialXEDF : uint8
{
	Uniform                                  = 0,
	Conical                                  = 1,
	Measured                                 = 2,
	MaxEDFCount                              = 3,
	EInterchangeMaterialXEDF_MAX             = 4,
};

// Enum InterchangeCommon.EInterchangeMaterialXVDF
// NumValues: 0x0004
enum class EInterchangeMaterialXVDF : uint8
{
	Absorption                               = 0,
	Anisotropic                              = 1,
	MaxVDFCount                              = 2,
	EInterchangeMaterialXVDF_MAX             = 3,
};

}

